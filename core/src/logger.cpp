#include "logger.hpp"
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>



namespace tst::zg {
    namespace Logger {

        #define BLACK       "\x1B[30m"
        #define RED         "\x1B[31m"
        #define GREEN       "\x1B[32m"
        #define YELLOW      "\x1B[33m"
        #define BLUE        "\x1B[34m"
        #define MAGENTA     "\x1B[35m"
        #define WHITE       "\x1B[37m"
        #define BLACK_B     "\x1B[90m"
        #define RED_B       "\x1B[91m"
        #define GREEN_B     "\x1B[92m"
        #define YELLOW_B    "\x1B[93m"
        #define BLUE_B      "\x1B[94m"
        #define MAGENTA_B   "\x1B[95m"
        #define WHITE_B     "\x1B[97m"
        #define RESET       "\033[0m"

        #define SET_COLOR(A) std::cout << A



        static std::vector<std::string> logs;
        
        static std::string FormatLine(int type, const char* mssg, time_t p_time) {
            std::stringstream sstr;
            if (type == 1) sstr << "(ERROR)";
            else if (type == 0) sstr << "(DEBUG)";
            const char* time_str = ctime(&p_time);
            int i = 0;
            while(time_str[i]!='\n') {
                sstr << time_str[i];
                i++;
            }
            sstr << ": " << mssg << std::endl;
            return sstr.str();
        }

        void LogError(const char* mssg) {
            std::string line = FormatLine(1, mssg, time(0));
            SET_COLOR(RED_B);
            std::cerr << line << std::endl;
            SET_COLOR(RESET);
            logs.push_back(line);
        }

        void LogMssg(const char* mssg) {
            std::string line = FormatLine(0, mssg, time(0));
            SET_COLOR(GREEN_B);
            std::cout << line << std::endl;
            SET_COLOR(RESET);
            logs.push_back(line);
        }
        
        void DumpLog(const char* path) {
            std::ofstream stream(path, std::ios::out);
            if (stream.is_open()) {
                for (auto& i : logs) {
                    stream << i;
                }
                stream.flush();
                stream.close();
            } else LogError("Could not dump log to file!");
        }

    }
}