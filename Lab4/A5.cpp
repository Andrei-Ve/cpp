#include <iostream>
#include <string>

class Car{
    private: 
        std::string model;
        int year;
        float price;
    public:
        Car(std::string m, int y, float p) : model(m), year(y), price(p) {}

        ~Car(){}

        void inputBasic(std::string m, int y, float p){ 
            model = m;
            year = y;
            price = p;
        }

        void displayBasic() const{
            std::cout << "Model: " << model << ", Year: " << year << ", Price: " << price << std::endl;
        }
};

class ElectricCar : public Car{
    private:
        float batterySize;
    public:
        void input(){

        }

        void display() const{
        
        }

};

class GasCar : public Car{
    private:
        float fuelCapacity;
    public:
        void input(){

        }

        void display() const{

        }

};

class HybridCar : public Car{
    private:
        float batterySize;
        float fuelCapacity;
    public:
        void input(){

        }

        void display() const{

        }

};
