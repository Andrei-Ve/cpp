#include <iostream>

// int calculator(int a, int b, char c) {
//   switch (c) {
//     case '+':return a+b;break;
//     case '-':return a-b;break;
//     case '*':return a*b;break;
//     case '/':return a/b;break;
//     default: std::cout << "  Errorrr ! ! !  "; return 0;
    
//   }
// }
float calculator(float a, float b, char c) {
  switch (c) {
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
  std::cout << "user input1: ";std::cin >> a;
  std::cout << "user input2: ";std::cin >> b;
  std::cout << "user input3: ";std::cin >> c;
  std::cout << a << " " << b << " " << c << " = " << calculator(a, b, c);
  return 0;
}
