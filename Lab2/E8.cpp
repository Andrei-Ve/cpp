#include <iostream>


int main() {
    int a = 100;
    std::cout << a << std::endl;
    int& refA = a; // Reference to a
    refA = 30; // Modifying refA modifies a
    std::cout << a << std::endl;
    return 0;
}