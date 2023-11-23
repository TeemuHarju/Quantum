#include <iostream>
#include <string>
#include <core/logger.h>

int main()
{
    Logger::initialize();
    LOG_ERROR("This is a test error.");

    return 0;
}
