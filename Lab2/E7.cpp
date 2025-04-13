#include <iostream>


int main() {
    int x = 100;
    int* p1 = &x; // Pointer 1 points to x
    int* p2 = p1; // Pointer 2 copies address (shallow copy)
    std::cout << x << std::endl;
    std::cout << *p1 << std::endl;
    std::cout << *p2 << std::endl;
    *p2 = 50;
    std::cout << x << std::endl;
    std::cout << *p1 << std::endl;
    std::cout << *p2 << std::endl;

    //changes the value in memory, very nice
    return 0;
}