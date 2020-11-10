#include <iostream>

int main() 
{ 
    std::cout << "What is yourname? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello world from "<< name<<std::endl;
    return 0;
}
