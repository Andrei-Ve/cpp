#include <iostream> 
#include <stdint.h>
#define MAX 5


int main() {
    int array1[MAX] = {1, 4, 7, 10, 15};
    int* PtrArray1 = array1;
    int array2[MAX];
    int* PtrArray2 = array2;

    std::cout << "array1 : ";
    for(uint8_t i = 0; i < MAX; i++) {
        std::cout << *(array1 + i) << " ";
    }

    for(uint8_t i = 0; i < MAX; i++) {
        *(PtrArray2 + i) = *(PtrArray1 + MAX - 1 - i);
    }
    std::cout << "\narray2 : ";
    for(uint8_t i = 0; i < MAX; i++) {
        std::cout << *(array2 + i) << " ";
    }
}