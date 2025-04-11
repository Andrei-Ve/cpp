#include <iostream>

int main() {
  while(1) {
    int a;
    std::cout << "Give me a number: "; std::cin >> a;
    if(a < 0) {
      break;
    }
    else if(a == 0) {
      continue;
    }
    else {
      std::cout << "Square of " << a << " is " << a*a << std::endl;
    }
  }
  return 0;
}
