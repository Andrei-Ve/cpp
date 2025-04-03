#include <iostream>
#include <string> 

namespace MathOperations{
    int add(int a, int b){
        return a + b;
    }
}

namespace TextOperations{
    std::string concat(std::string a, std::string b){
        return a + b;
    }
}

int main() {
    int a, b;
    std::cout << "Input the first number: "; std::cin >> a;
    std::cout << "Input the second number: "; std::cin >> b;
    std::cout << MathOperations::add(a, b) << std::endl;
    std::string x, y;
    std::cout << "Input the first word: "; std::cin >> x;
    std::cout << "Input the second word: "; std::cin >> y;
    std::cout << TextOperations::concat(x, y) << std::endl;
    return 0;
}
