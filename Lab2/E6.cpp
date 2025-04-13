#include <iostream> 
#include <stdint.h>

struct Student {
    char name[50];
    int id;
    float grade;
};

Student student[50];  //max students in Student struct
uint8_t numberOfStudents = 0;  //keeping up with number of students

void addStudent() {   //function to add student
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

void dispStrudent() {  //function to display all student NAMES!!
    for(uint8_t i = 0; i<numberOfStudents;i++) {
    std::cout << student[i].name << std::endl;
    }
}

void searchStudentByID() {  //function to search student by their ID
    int searchID;
    bool IDfound = false;
    std::cout << "Enter students ID: ";
    std::cin >> searchID;
    for(uint8_t i = 0; i<numberOfStudents;i++) {  //going through every student to see if ID matches 
        if(searchID == student[i].id){  //if match, we print
            std::cout << "Name: " << student[i].name << std::endl;
            std::cout << "ID: " << student[i].id << std::endl;
            std::cout << "Gradew: " << student[i].grade << std::endl;
            IDfound = true;
        }
    }  
    if (!IDfound) {std::cout << "ID: " << searchID << " was not found!!" << std::endl;} //if not found
}


int main() {
    char action;
    bool looping = true;
    
    //looping and asking for input
    while(looping) {
        std::cout << "\nenter '+' to add a new student\n";
        std::cout << "enter 'd' to display all students\n";
        std::cout << "enter '#' to search a student by ID\n";
        std::cout << "enter anyting else to exit the program \n";
        std::cin >> action; 
        switch (action) {
        case '+': //+ to add student
            addStudent();
            break;
        case 'd': //d to display
            dispStrudent();
            break;
        case '#':  //# to search by ID
            searchStudentByID();
            break;
        default:
            std::cout << "Bye bye ";
            looping = false;
            break;
        }
    }

    return 0;
}