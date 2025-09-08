#include <iostream>
#include "../include/greetingUtils.h"

#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace GreetingUtils;

int main()
{
    cout << "Please enter name: ";
    string name;
    std::getline(cin, name);
    string message = createMessage(name);
    char *greeting = formatAsCString(message);
    cout << greeting << endl;
    delete[] greeting;
}