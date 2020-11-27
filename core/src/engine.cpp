#include "engine.hpp"

int main() {
    using namespace tst::zg;
    Logger::LogMssg("Hello World!");
    Logger::LogMssg("We like scooters!");
    Logger::LogError("404: Page not found!");
    Logger::LogMssg("Beep Boop!");
    Logger::LogMssg("Hello World!");
    Logger::LogMssg("We like scooters!");
    Logger::DumpLog("log.txt");
    return 0;
}