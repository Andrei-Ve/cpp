#include <iostream>

int product(int a, int b) {
  return a*b;
}

double product(double a, double b) {
  return a*b;
}

double product(int a, double b, bool c) {
  if(!c){return a*b;}
  else if (c) {return int(a*b);}
  else{
    std::cout << "!!! Something went wrong !!!";
    return 0;
  }
}

int main() {
  int FirstInt, SecondInt;
  // std::cout << "Input first intiger: "; 
  // std::cin >> FirstInt; 
  // std::cout << "Input second intiger: "; 
  // std::cin >> SecondInt;
  // std::cout << "= " << product(FirstInt, SecondInt) << "\n\n";

  double FirstDBL, SecondDBL;
  // std::cout << "Input first dbl/float: "; std::cin >> FirstDBL; 
  // std::cout << "Input second dbl/float: "; std::cin >> SecondDBL;
  // std::cout << "= " << product(FirstDBL, SecondDBL) << "\n\n";

  bool flr;
  std::cout << "Input first intiger: "; std::cin >> FirstInt; 
  std::cout << "Input second float: "; std::cin >> FirstDBL;
  std::cout << "Input '0' to get exact value, '1' to get rounded value: "; std::cin >> flr;
  std::cout << "= " << product(FirstInt, FirstDBL, flr) << "\n\n";

  return 0;
}

