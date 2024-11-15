#include <iostream>

int main(void)
{

    std::string *person;

    person = new std::string("Karl");

    std::cout << "Hello World " << person << std::endl;
    
    std::cout << "Goodbye World!" << std::endl;

    return 0;
}