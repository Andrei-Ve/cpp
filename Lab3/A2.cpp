#include <iostream>
#include <string>

class Student {
    private:
        std::string name;
        int age;
        char grade;
        std::string group = "2025 group";
    public:
        void setName(std::string n) {
            name = n;
        }

        void setAge(int a) {
            age = a;
        }

        void setGrade(char g) {
            grade = g;
        }

        std::string getName() {return name;}

        int getAge() {return age;}

        char getGrade() {return grade;} 
        
        void displayInfo() {
            std::cout << "Name: " << getName() << std::endl;
            std::cout << "Age: " << getAge() << std::endl;
            std::cout << "Grade: " << getGrade() << std::endl;
        }
};



int main() {
    Student student1;
    student1.setName("Ruger");
    student1.setAge(25);
    student1.setGrade('E');
    student1.displayInfo();


    return 0;
}