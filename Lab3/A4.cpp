#include <iostream>
#include <stdint.h>
#include <string>

class Vehicle{
    protected:
        std::string brand;
        uint16_t year;
    public:
        Vehicle(std::string b, uint16_t y) {
            brand = b;
            year = y;
        }
        void showInfo() {
            std::cout << "Brand: " << brand << std::endl;
            std::cout << "Year: " << year << std::endl;
        }
        void startEngine() {
            std::cout << "Starting engine of Vehicle" << std::endl;
        }
};

class Car : Vehicle{
    private:
        uint8_t numDoors;
    public:
        Car(std::string b, uint16_t y, uint8_t n){
            // brand = b;
            // year = y;
            numDoors = n;
            Vehicle Vehicle(b, y);
        }
        void showInfo() {
            std::cout << "Brand: " << brand << std::endl;
            std::cout << "Year: " << year << std::endl;
            std::cout << "Number of doors: " << numDoors << std::endl;
        }
        void startEngine(){
            std::cout << "Car engine is starting!" << std::endl;
        }
};

class ElectricCar : public Car{
    private:
        short int batteryCapacity;
    public:
        ElectricCar(std::string b, uint16_t y, uint8_t n, short int c){
            // Car.brand = b;
            // year = y;
            // numDoors = n;
            batteryCapacity = 0;
        }
        void showInfo() {
            std::cout << "Brand: " << brand << std::endl;
            std::cout << "Year: " << year << std::endl;
            std::cout << "Number of doors: " << numDoors << std::endl;
            std::cout << "Battery capacity: " << batteryCapacity << std::endl;
        }
        void startEngine(){
            std::cout << "Electric engine is starting... Silent but powerful!" << std::endl;
        }
};

int main(){
    Vehicle* v1 = new Vehicle("Toyota", 1999);
    v1->showInfo();
    v1->startEngine();
    Car* c1 = new Car("Toyota", 1999, 4);
    c1->showInfo();
    c1->startEngine();
    Vehicle* ec1 = new Vehicle("Toyota", 1999, 2, 50000);
    ec1->showInfo();
    ec1->startEngine();
    return 0;
}