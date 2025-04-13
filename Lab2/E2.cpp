#include <iostream>

void swapUsingNothing(float a, float b) {
  float c = a;    //we use c as temporary value to store a
  a = b; 
  b = c;
}

void swapUsingPointers(float *a, float *b) {
  float c = *a;     //we use c as temporary value to store value at a
  *a = *b;      //we use c as temporary value to store a
  *b = c;
}

void swapUsingReferences(float &a, float &b) {    //getting memaddres of a and b
  //modifying a and b, because now we know where thay are
  float c = a;  
  a = b;
  b = c; 
}

int main() {
  float a, b;
  std::cout << "a = "; std::cin >> a; 
  std::cout << "b = "; std::cin >> b;

  //calling diff, functions and printing out values
  swapUsingNothing(a, b);
  std::cout << "a = " << a << " b = " << b << std::endl;
  swapUsingPointers(&a, &b);
  std::cout << "a = " << a << " b = " << b << std::endl;
  swapUsingReferences(a, b);
  std::cout << "a = " << a << " b = " << b << std::endl;

  return 0;
}
