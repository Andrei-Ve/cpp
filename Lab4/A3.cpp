#include <iostream>
#include <string>
// #include <stdint.h>


//Car class
class Car{
    private:
        std::string model;
        int year;
        double price;
    public:
        //default constructor
        Car() {            
            model = "unknown";
            year = 0;
            price = 0;
        }
        //Car
        Car(std::string m, int y, double p) : model(m), year(y), price(p) {}  //constructor with params
        //destructor
        ~Car(){
            std::cout << "Car destructor: " << model << " destroyed " << std::endl;
        }
        //member to display car's info
        void display() const {
            std::cout << "Model: " << model << ", Year: " << year << ", Price $" << price << std::endl;
        }
};

//CarCollection class
class CarCollection{ 
    private:
        int numOfCars = 0;
    public:
        std::string model;
        int year;
        double price;
        Car* collection;

        //constructor
        CarCollection(){ 
            std::cout << "How many cars do you want to enter? "; 
            std::cin >> numOfCars;
            collection = new Car[numOfCars]; //creating collection
            for(int i = 0; i < numOfCars; ++i) {  //for each car, asking info about car and then saving it in collection
                input();
                new (&collection[i]) Car(model, year, price);   //new way   // asked chat, because old way printed destruction of temporary Car
                //collection[i] = Car(model, year, price);  //old way
            }
        }
        //destructor
        ~CarCollection() {
            delete[] collection;  //cleans array from memory
            std::cout << "Collection destroyed"<< std::endl;
        }
            //member to ask for input
        void input() {
            std::cin.ignore();
            std::cout << "\nEnter model: ";
            std::getline(std::cin, model);
            std::cout << "Enter year: "; 
            std::cin >> year;
            std::cout << "Enter price: "; 
            std::cin >> price; 
        }
            //member to display collections
        void displayCars() const{
            std::cout << "\n~~~~Car Collection~~~~\n";
            for(int i = 0; i < numOfCars; ++i){
               collection[i].display();
            }
            std::cout << std::endl;
        }
        
};

int main() {
    //creating collection
    CarCollection collection;
    collection.displayCars();

    return 0;
}