#include <iostream>
#include <string> 

namespace MathOperations{   //MathOperations namespace
    int add(int a, int b){
        return a + b;
    }
}

namespace TextOperations{       //TextOperations namespace
    std::string concat(std::string a, std::string b){ 
        return a + b;
    }
}

int main() {
    int a, b;
    std::cout << "Input the first number: "; std::cin >> a;  //asks first num
    std::cout << "Input the second number: "; std::cin >> b; //asks second num
    std::cout << MathOperations::add(a, b) << std::endl;  //sends them away, prints out sum
    std::string x, y;
    std::cout << "Input the first word: "; std::cin >> x;  
    std::cout << "Input the second word: "; std::cin >> y;
    std::cout << TextOperations::concat(x, y) << std::endl;
    return 0;
}
