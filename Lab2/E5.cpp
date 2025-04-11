#include <iostream> 
#include <stdint.h>
#define MAX 30


int main() {
    int array1[MAX] = {1, 4, 7, 10, 15};
    int* PtrArray1;
    int array2;
    int* PtrArray2;
    for(uint8_t i = 0; i < MAX; i++) {
        *PtrArray2[i] = *PtrArray1[MAX-i];
    }

    std::cout << "fjehfef : " << (array2 + 1);

}