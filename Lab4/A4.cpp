#include <iostream>
#include <string>

int main(){
    int age;
    std::string name;
    //1
    std::cout << "#1\nenter you age: ";
    std::cin >> age;
    std::cout << "enter your full name: ";
    getline(std::cin, name);
    std::cout << "age: " << age << ", name: " << name << std::endl;

    //2
    std::cout << "#2\nenter you age: ";
    std::cin >> age;
    std::cin.ignore();
    std::cout << "enter your full name: ";
    getline(std::cin, name);
    std::cout << "age: " << age << ", name: " << name << std::endl;

    return 0;
}