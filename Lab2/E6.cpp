#include <iostream> 
#include <stdint.h>

struct Student {
    char name[50];
    int id;
    float grade;
};

Student student[50];
uint8_t numberOfStudents = 0;

void addStudent() {
    Student newstudent;
    std::string StudentName;
    int* PrtStdnt;
    uint8_t x = 0;
    std::cout << "enter students name: ";
    std::cin >> StudentName;

    
    for(char &Ltr:StudentName) {
        newstudent.name[x] = Ltr;
        x++;
    }
    std::cout << StudentName << "'s ID: ";
    std::cin >> newstudent.id;
    std::cout << StudentName << "'s grade: ";
    std::cin >> newstudent.grade;
    student[numberOfStudents++] = newstudent;
}

void dispStrudent() {
    for(uint8_t i = 0; i<numberOfStudents;i++) {
    std::cout << student[i].name << std::endl;
    }
}

void searchStudentByID() {
    int searchID;
    bool IDfound = false;
    std::cout << "Enter students ID: ";
    std::cin >> searchID;
    for(uint8_t i = 0; i<numberOfStudents;i++) {
        if(searchID == student[i].id){
            std::cout << "Name: " << student[i].name << std::endl;
            std::cout << "ID: " << student[i].id << std::endl;
            std::cout << "Gradew: " << student[i].grade << std::endl;
            IDfound = true;
        }
    }
    if (!IDfound) {std::cout << "ID: " << searchID << " was not found!!" << std::endl;}
}


int main() {
    char action;
    bool looping = true;
    while(looping) {
        std::cout << "\n\nenter '+' to add a new student\n";
        std::cout << "enter 'd' to display all students\n";
        std::cout << "enter '#' to search a student by ID\n";
        std::cout << "enter anyting else to exit the program \n";
        std::cin >> action; 
        switch (action) {
        case '+':
            addStudent();
            break;
        case 'd':
            dispStrudent();
            break;
        case '#':
            searchStudentByID();
            break;
        default:
            std::cout << "errorr";
            looping = false;
            break;
        }
    }

    return 0;
}