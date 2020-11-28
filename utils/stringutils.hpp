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
        
        string format(const char* p_format, ...) {

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