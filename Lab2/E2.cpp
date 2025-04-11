#include <iostream>

void swapUsingNothing(float a, float b) {
  float c = a;
  a = b;
  b = c;
}

void swapUsingPointers(float *a, float *b) {
  float c = *a;
  *a = *b;
  *b = c;
}

void swapUsingReferences(float &aRef, float &bRef) {
  float a = aRef;
  float b = bRef;
  a = bRef;
  b = aRef;
}

int main() {
  float a, b;
  std::cout << "a = "; std::cin >> a; 
  std::cout << "b = "; std::cin >> b;
  swapUsingNothing(a, b);
  std::cout << "a = " << a << " b = " << b << std::endl;
  swapUsingPointers(&a, &b);
  std::cout << "a = " << a << " b = " << b << std::endl;
  swapUsingReferences(a, b);
  std::cout << "a = " << a << " b = " << b << std::endl;

  return 0;
}
