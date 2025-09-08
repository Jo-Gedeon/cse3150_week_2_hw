#include <iostream>
#include "../include/greetingUtils.h"
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

namespace GreetingUtils
{
    string createMessage(const string &name)
    {
        return "Hello, " + string(name) + "!";
    }

    char *formatAsCString(const string &msg)
    {
        int len = msg.length();
        char *stringRay = new char[len + 1]; // allocate memory
        for (int i = 0; i < len; ++i)        // loop to copy string
        {
            stringRay[i] = msg[i];
        }
        stringRay[len] = '\0'; // null terminator
        return stringRay;
    }
}