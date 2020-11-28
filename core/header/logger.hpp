#include <string>

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

        void LogError(std::string);
        void LogMssg(std::string);
        void DumpLog(std::string);
    }
}