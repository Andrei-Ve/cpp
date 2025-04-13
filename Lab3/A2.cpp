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

        // void displayInfo() {

        // }
};


int main() {


    return 0;
}