#include <iostream>

int main() {
    // printing "Hello word from <name>"
    std::cout << "What is yourname? ";
    std::string name;
    //only one word will be written to "name"
    std::cin >> name;
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
