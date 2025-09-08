#ifndef GREETING_UTILS_H
#define GREETING_UTILS_H

#include <string>

namespace GreetingUtils
{
    std::string createMessage(const std::string &name);
    char *formatAsCString(const std::string &msg);
}

#endif