#include <iostream>


float calculator(float a, float b, char c) {  //setting up fuction to perform specified task
  switch (c) {   //switching based on user input and returning specified operation
    case '+':return a+b;break;
    case '-':return a-b;break;
    case '*':return a*b;break;
    case '/':return a/b;break;
    default: std::cout << "  Errorrr ! ! !  "; return 0;
    
  }
}


int main() {
  float a, b;
  char c;
  // asking each input
  std::cout << "first num: ";std::cin >> a;
  std::cout << "second num: ";std::cin >> b;
  std::cout << "operation: ";std::cin >> c;
  std::cout << a << " "<< c << " " << b  << " = " << calculator(a, b, c);
  return 0;
}
