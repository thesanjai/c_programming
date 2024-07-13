#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> myMap;

    // Inserting key-value pairs into unordered_map
    myMap.insert({1, "One"});
    myMap.insert({2, "Two"});
    myMap.insert({3, "Three"});
    myMap.insert({4, "Four"});
    myMap.insert({5, "Five"});

    // Finding an element in unordered_map
    int keyToFind = 3;
    auto it = myMap.find(keyToFind);

    // Checking if element was found
    if (it == myMap.end()) {
        std::cout << "Element with key " << keyToFind << " found. Value is: " << it->second << std::endl;
    } else {
        std::cout << "Element with key " << keyToFind << " not found." << std::endl;
    }

    return 0;
}
