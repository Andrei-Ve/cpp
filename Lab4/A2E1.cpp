#include <iostream>
#include <string>

class Book{
    private:
        std::string title;
        int pages;
    public:
        Book(std::string t = "Untitled", int p = 0) : title(t), pages(p){
            std::cout << "Constructor: \"" << title << "\" with " << pages << " pages.\n";
        }

        ~Book(){
            std::cout << "Destructor: \"" << title << "\" destroyed.\n";
        }

        void display() const {
            std::cout << "Title: " << title << ", Pages: " << pages << std::endl;
        }
};

int main() {
    Book library[3] = {
        Book("C++ basics", 500),
        Book("Data structures", 300),
        Book("C++ advanced", 150)
    };

    std::cout << "\n~~~~Library contents~~~~\n";
    for(int i = 0; i < 3; ++i){
        library[i].display();
    }

    std::cout << "\n~~~~end of program~~~~\n";
    
    return 0;
}