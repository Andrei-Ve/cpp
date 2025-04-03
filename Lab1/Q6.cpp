#include <iostream>
#include <string>

int main() {
    long long int x;
    std::cout << "Input a number: "; std::cin >> x; //taking input
    std::string str_x = std::to_string(x);
    std::string str_x2 = str_x;  //creating a copy of string to compare it
    for (int x = 0; x <= str_x.length(); x++){
        str_x[x] = str_x2[str_x2.length()-1-x];  // reverses the order
    }
    std::cout << str_x;
    return 0;
}
