#include <iostream>
#include <string>

int main() {
    int x;
    int xsum = 0; 
    std::cout << "Input a number: "; std::cin >> x; //taking input
    std::string strin = std::to_string(x); // changing int to char
    for (int i = 0; i <= strin.length() - 1; i++) {  //this is a loop  WOW!

        xsum = xsum + strin[i] - '0'; //summing up munbers
    }
    
    std::cout << "Sum: " << xsum << std::endl; //printing out
    return 0;
}