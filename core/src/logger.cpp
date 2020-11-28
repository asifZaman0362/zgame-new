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

        void LogError(std::string mssg) {
            std::string line = FormatLine(1, mssg.c_str(), time(0));
            SET_COLOR(RED_B);
            std::cerr << line << std::endl;
            SET_COLOR(RESET);
            logs.push_back(line);
        }

        void LogMssg(std::string mssg) {
            std::string line = FormatLine(0, mssg.c_str(), time(0));
            SET_COLOR(GREEN_B);
            std::cout << line << std::endl;
            SET_COLOR(RESET);
            logs.push_back(line);
        }
        
        void DumpLog(std::string path) {
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