#include <iostream>
#include <string>

class Book {
    private:
        std::string title;
        int page;
        std::string author = "Peter";
    protected:
        float price;
    public:
        std::string publisher;
        void displayAuthorInfo() {
            std::cout << "Author is " << author << std::endl;
        }
};


int main() {
    Book book1;

    // book1.title = "aa";
    // std::cout << book1.title;

    book1.publisher = "Metropolia";
    std::cout << "Publisher is " << book1.publisher << std::endl;;
    
    book1.displayAuthorInfo();

    return 0;
}