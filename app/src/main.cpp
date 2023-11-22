#include <iostream>
#include <string>
#include <core/logger.h>

int main()
{
    std::string s{ "Hello, world!" }; // s makes a copy of its initializer
    std::string f = "Hello, world!";
    std::cout << s << '\n';

    return 0;
}
