#include <iostream>
#include <stdint.h>
#include <string>


//vehicle class
class Vehicle{
    protected:
        std::string brand;
        int year;
    public:
        //default const
        Vehicle(){
            brand = "Unknown";
            year = 0;
        }
        //constructor
        Vehicle(std::string b, int y) {
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
//car class
class Car : public Vehicle{
    protected:
        int numDoors;
    public:
        //default const
        Car(){
            brand = "Unknown";
            year = 0;
            numDoors = 0;
        }
        //constructor
        Car(std::string b, int y, int n) : Vehicle(b, y){
            numDoors = n;
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
//electiccar class
class ElectricCar : public Car{
    private:
        int batteryCapacity = 0;
    public:
    //default const
        ElectricCar(){
            brand = "Unknown";
            year = 0;
            numDoors = 0;
            batteryCapacity = 0;
        }
        //constructor
        ElectricCar(std::string b, int y, int n, int c) : Car(b, y, n){
            
            batteryCapacity = c;
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
    ElectricCar* ec1 = new ElectricCar("Toyota", 1999, 2, 5000);
    ec1->showInfo();
    ec1->startEngine();
    return 0;
}