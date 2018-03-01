#include <iostream> // This is single-line comment because it follow the two foward-slash. 
#include <string>

int main() {
    std::string input;
    std::cout << "What's your first name?" << std::endl; //instert name: khiar M khiar 
    std::cin >> input;
    std::cout << "Hello, " << input << std::endl;
    return 0;
}
