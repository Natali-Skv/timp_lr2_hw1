#include <iostream>

int main() 
{
    // this code meant for printing "Hello word from <name>"
    std::cout << "What is yourname? ";
    std::string name;
    //Attention!!!only one word will be written to "name"
    std::cin >> name;
    std::cout << "Hello world from "<< name<<std::endl;
    return 0;
}
