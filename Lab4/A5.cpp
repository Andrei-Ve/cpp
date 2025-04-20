#include <iostream>
#include <string>

class Car{
    private: 
        std::string model;
        int year;
        float price;
    public:
        Car(std::string m, int y, float p) : model(m), year(y), price(p) {}

        ~Car(){
            std::cout << "Destroyed " << model;
        }

        virtual void input(){}
        virtual void display() const{}

        void inputBasic(std::string m, int y, float p){ 
            model = m;
            year = y;
            price = p;
        }

        void displayBasic() const{
            std::cout << "Model: " << model << ", Year: " << year << ", Price: " << price;
        }
};

class ElectricCar : public Car{
    private:
        float batterySize;
    public:
        ElectricCar(std::string m, int y, float p) : Car(m, y, p){}
        void input(){
            std::cout << "Enter battery size (kWh): ";
            std::cin >> batterySize;
        }

        void display() const{
            std::cout << ", Batterysize: " << batterySize << std::endl;
        }

};

class GasCar : public Car{
    private:
        float fuelCapacity;
    public:
        GasCar(std::string m, int y, float p) : Car(m, y, p){}
        void input(){
            std::cout << "Enter fuelc capacity (L): ";
            std::cin >> fuelCapacity;
        }

        void display() const{
            std::cout << ", Fuelcapacity: " << fuelCapacity << std::endl;
        }

};

class HybridCar : public Car{
    private:
        float batterySize;
        float fuelCapacity;
    public:
        HybridCar(std::string m, int y, float p) : Car(m, y, p){}
        void input(){
            std::cout << "Enter battery size (kWh): ";
            std::cin >> batterySize;
            std::cout << "Enter fuelc capacity (L): ";
            std::cin >> fuelCapacity;
        }

        void display() const{
            std::cout << ", Batterysize: " << batterySize << ", Fuelcapacity: " << fuelCapacity << std::endl;
        }

};

int main(){
    int numberOfCars;
    std::cout << "Enter number of cars in the fleet: ";
    std::cin >> numberOfCars;
    std::cin.ignore();

    Car** CarFleet = new Car*[numberOfCars];
    int* CarType = new int[numberOfCars];

    std::string model;
    int year;
    float price;

    for(int i = 0; i < numberOfCars; ++i){
        std::cout << "\nCar #" << i+1 << " type:\n[1] Electric\n[2] Gasoline\n[3] Hybrid" << std::endl;
       
        std::cout << "Enter choice: ";
        std::cin >> CarType[i];
        // std::cout << "    car type is   " << *FleetType[i];
        std::cin.ignore();

        std::cout << "Enter model: ";
        std::getline(std::cin, model);
        std::cout << "Enter year: ";
        std::cin >> year;
        std::cout << "Enter price: ";
        std::cin >> price;

        CarFleet[i] = new Car(model, year, price);

        switch (CarType[i]) {
            case 1:
                CarFleet[i] = new ElectricCar(model, year, price);
                break;
            case 2:
                CarFleet[i] = new GasCar(model, year, price);
                break;
            case 3:
                CarFleet[i] = new HybridCar(model, year, price);
                break;
            default:
                break;
        }

        CarFleet[i]->input();
    }
    std::cout << "\n~~~~Fleet Info~~~~\n";
    for(int i = 0; i < numberOfCars; ++i){
        CarFleet[i]->displayBasic();
        CarFleet[i]->display();
    }

    std::cout << "\n~~~~Clearing fleet~~~~\n";
    for (int i = 0; i < numberOfCars; ++i){
        delete CarFleet[i];
    }

    delete[] CarFleet;
    delete[] CarType;

    return 0;
}
