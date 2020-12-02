#pragma once
#include <string>
#include <string.h>
#include <sstream>
#include <vector>
#include <stdlib.h>
#include <stdarg.h>
#include <iostream>


namespace tst::zg::utils {
    namespace StringUtils {
        
        using std::vector, std::string, std::stringstream;
        
        string format(std::string p_format, ...) {
            va_list args;
            va_start(args, p_format);
            char ftext[100];
            vsprintf(ftext, p_format.c_str(), args);
            string fstr(ftext);
            va_end(args);
            return fstr;
        }

        string join(vector<string> list, const char* seperator="") {
            stringstream stream;
            for (auto& str : list) {
                stream << str;
                if (str != list.back()) stream << seperator;
            }
            return stream.str();
        }
        
        vector<string> split(string str, const char* delimiter = ",") {
            vector<string> list;
            int index = 0;
            while (true) {
                int new_index = str.find(delimiter, index+strlen(delimiter));
                    if (new_index == string::npos) {
                        list.push_back(str.substr(index));
                        break;
                    }
                    else {
                        list.push_back(str.substr(index, new_index-index));
                        index = new_index + strlen(delimiter);
                    }
            }
            return list;
        }
    }
}