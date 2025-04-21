#include <iostream>
#include <string>

class Book{
    private:
        std::string title;
        int pages;
    public:
    //constructor
        Book(std::string t = "Untitled", int p = 0) : title(t), pages(p){
            std::cout << "Constructor: \"" << title << "\" with " << pages << " pages.\n";
        }
        //destructor
        ~Book(){
            std::cout << "Destructor: \"" << title << "\" destroyed.\n";
        }

        void display() const {
            std::cout << "Title: " << title << ", Pages: " << pages << std::endl;
        }
};

class BookShelf{
    private:
        Book* books;
        int size;
    public:
        //constructor that creates bookshelf with 3 books in it
        BookShelf(){
            size = 3;
            books = new Book[size]{
                Book("C++ basics", 500),
                Book("Data structures", 300),
                Book("C++ advanced", 150)
            };
            std::cout << "BookShelf contructor: Shelf initialized with " << size << " books" << std::endl;
        }
        //destructor deletes array of books
        ~BookShelf(){
            delete[] books;
            std::cout << "BookShelf constructor: Shelf destroyed. " << std::endl;
        }
        //displaying all books in the shelf
        void displayBooks() const{
            std::cout << "Books on shelf: " << std::endl;
            for(int i = 0; i < size; ++i){
                books[i].display();
            }
        }
};



int main() {
    //creating bookshelf called shelf
    BookShelf* shelf = new BookShelf();
    shelf->displayBooks();

    delete shelf;
    std::cout << "\n~~~~end of program~~~~\n";  
    return 0;
}