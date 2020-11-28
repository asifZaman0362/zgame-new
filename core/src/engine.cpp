#include "engine.hpp"
#include "stringutils.hpp"

int main() {
    using namespace tst::zg;
    using namespace tst::zg::utils;
    std::string text = StringUtils::format("Hello World! I am %s and I have %d diamonds!", "zero", 9);
    Logger::LogMssg(text);
    return 0;
}