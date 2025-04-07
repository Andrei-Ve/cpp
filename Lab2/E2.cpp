#include <iostream>

void swapUsingNothing(float a, float b) {
  float c = a;
  a = b;
  b = c;
  std::cout << "a = " << a << " b = " << b << std::endl;
}

void swapUsingPointers(float *a, float *b) {
  float c = *a;
  *a = *b;
  *b = c;
  std::cout << "a = " << *a << " b = " << *b << std::endl;
}

// void swapUsingReferences(int &a, int &b) {


// }

int main() {
  float a, b;
  std::cout << "enter a: "; std::cin >> a; 
  std::cout << "enter b: "; std::cin >> b;
  swapUsingNothing(a, b);
  swapUsingPointers(&a, &b);

  return 0;
}
