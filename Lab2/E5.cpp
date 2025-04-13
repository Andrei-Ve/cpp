#include <iostream> 
#include <stdint.h>
#define MAX 5


int main() {
    int array1[MAX] = {1, 4, 7, 10, 15}; //maing up random list of ints
    int* PtrArray1 = array1;        //pointer to array1
    int array2[MAX];        //making second list with same size as array1
    int* PtrArray2 = array2; //pointer

   // printing original values
    std::cout << "array1 : ";
    for(uint8_t i = 0; i < MAX; i++) {
        std::cout << *(array1 + i) << " ";  
    }
    //transferring values from array1 to array2 and reversing them
    for(uint8_t i = 0; i < MAX; i++) {
        *(PtrArray2 + i) = *(PtrArray1 + MAX - 1 - i);
    }

    // printihg array2 values
    std::cout << "\narray2 : ";
    for(uint8_t i = 0; i < MAX; i++) {
        std::cout << *(array2 + i) << " ";
    }
}