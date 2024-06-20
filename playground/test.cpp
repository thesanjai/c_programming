#include <iostream>
#include <format>  // Include the C++20 format library

int main() {
    int value = 10;
    std::string message = std::format("The value is {}", value);  // Using {} for formatting
    std::cout << message << std::endl;
    return 0;
}
