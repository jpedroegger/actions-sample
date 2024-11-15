#include <iostream>

int main(void)
{

    std::string *person;

    //Memory leak
    person = new std::string("Karl");

    std::cout << "Hello World " << person << std::endl;
    
    std::cout << "Goodbye World!" << std::endl;

    return 0;
}