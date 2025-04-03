#include <iostream>
#define SQUARE(x) x*x  //MACRO 

int main() {
    short int x;
    std::cout << "Input a number: "; std::cin >> x;
    std::cout << SQUARE(x);
    return 0;
}