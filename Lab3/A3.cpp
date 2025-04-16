#include <iostream>
#include <string>
#include <stdint.h>

class Car {
    private:
        std::string brand;
        uint16_t year;

    public:
        Car(std::string b, uint16_t y) {
            brand = b;
            year = y;
            std::cout << "Car " << brand << " from " << year << " created." << std::endl;
        }
        ~Car() {
            std::cout << "Car " << brand << " destroyed." << std::endl;
        }
        void showInfo() {
            std::cout << "Brand: " << brand << std::endl;
            std::cout << "Year: " << year << std::endl;
        }
};


int main() {
    Car Car("Toyota", 2020);
    Car.showInfo();
    Car.~Car();
    return  0;
}