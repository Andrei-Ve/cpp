#include <iostream>
#include <string>

class Car{
    private: 
        std::string model;
        int year;
        float price;
    public:
    //constructor
        Car(std::string m, int y, float p) : model(m), year(y), price(p) {}
        //destructor
        ~Car(){
            std::cout << "Destroyed " << model << "\n";
        }

        //creating virtual so we could use functions in derived classes, didnt work without this
        virtual void input(){}
        virtual void display() const{}

        //taking basic inputs
        void inputBasic(std::string m, int y, float p){ 
            model = m;
            year = y;
            price = p;
        }

        //displaying 
        void displayBasic() const{
            std::cout << "Model: " << model << ", Year: " << year << ", Price: " << price;
        }
};


//derived class electricCar
class ElectricCar : public Car{
    private:
        float batterySize;
    public:
        //constructor refers to Car class
        ElectricCar(std::string m, int y, float p) : Car(m, y, p){}
        //asks for extra params
        void input(){
            std::cout << "Enter battery size (kWh): ";
            std::cin >> batterySize;
        }
        //displays special params
        void display() const{
            std::cout << ", Batterysize: " << batterySize << std::endl;
        }

};
//derived class GasCar
class GasCar : public Car{
    private:
        float fuelCapacity;
    public:
        //constructor refers to Car class
        GasCar(std::string m, int y, float p) : Car(m, y, p){}
        //asks for extra params
        void input(){
            std::cout << "Enter fuelc capacity (L): ";
            std::cin >> fuelCapacity;
        }
        //displays special params
        void display() const{
            std::cout << ", Fuelcapacity: " << fuelCapacity << std::endl;
        }

};
//derived class HybridCar
class HybridCar : public Car{
    private:
        float batterySize;
        float fuelCapacity;
    public:
        //constructor refers to Car class
        HybridCar(std::string m, int y, float p) : Car(m, y, p){}
        //asks for extra params
        void input(){
            std::cout << "Enter battery size (kWh): ";
            std::cin >> batterySize;
            std::cout << "Enter fuelc capacity (L): ";
            std::cin >> fuelCapacity;
        }
        //displays special params
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


        //ask basic info
        std::cout << "Enter model: ";
        std::getline(std::cin, model);
        std::cout << "Enter year: ";
        std::cin >> year;
        std::cout << "Enter price: ";
        std::cin >> price;

        CarFleet[i] = new Car(model, year, price);

        //change Car class to whatever
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
        //call input depending on the type of car
        CarFleet[i]->input();
    }

    //display whole fleet
    std::cout << "\n~~~~Fleet Info~~~~\n";
    for(int i = 0; i < numberOfCars; ++i){
        CarFleet[i]->displayBasic();
        CarFleet[i]->display();
    }
    //clear fleet
    std::cout << "\n~~~~Clearing fleet~~~~\n";
    for (int i = 0; i < numberOfCars; ++i){
        delete CarFleet[i];
    }
    //delete fleet array and car type array
    delete[] CarFleet;
    delete[] CarType;

    return 0;
}
