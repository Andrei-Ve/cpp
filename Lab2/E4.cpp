#include <iostream>

int main() {
  while(1) {
    int a;
    std::cout << "Give me a number: "; std::cin >> a;
    if(a < 0) {
      break;  //breaking while loop if a<0
    }
    else if(a == 0) {
      continue; //continue if a == 0
    }
    else {    //else (a>0) we square the number that was inputted
      std::cout << "Square of " << a << " is " << a*a << std::endl;
    }
  }
  return 0;
}
