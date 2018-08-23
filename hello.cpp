#include <string>
#include <iostream>

int main()
{
    std::string msg = "Hello, World!";
    std::cout << msg;

    std::string key;
    std::cout << std::endl << std::endl << "Press any key + <Enter>..." << std::endl;
    std::cin >> key;
    
    return 0;
}
