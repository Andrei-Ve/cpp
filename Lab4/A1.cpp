#include <iostream>
#include <cmath>

class Complex{
    private:
        float real;
        float imag;
    public:
        //constructor
        Complex(double r = 0, double i = 0) : real(r), imag(i) {}

        Complex operator-(const Complex& other){
            return Complex(real-other.real, imag-other.imag);
        }
        Complex operator+(const Complex& other){
            return Complex(real+other.real, imag+other.imag);
        }
        Complex operator/(const Complex& other){
            double x = real, y = imag;
            double a = other.real, b = other.imag;
                
            // double tempReal = ((a*x+b*y)/(a*a+b*b));
            // double tempImag = ((a*y-b*x)/(a*a+b*b));

            return Complex((a*x+b*y)/(a*a+b*b), (a*y-b*x)/(a*a+b*b));
        }


        friend std::ostream& operator<<(std::ostream& os, const Complex& c);

        // void display() const {
        //     std::cout << real << " + " << imag << "i" <<std::endl;
        // }
        
};

std::ostream& operator<<(std::ostream& os, const Complex& c){
    os << c.real << " + " << c.imag << "i" << std::endl;
    return os;
}


int main(){
    Complex c1(4, 5), c2(2, -3);

    std::cout << "c1 is " << c1;
    std::cout << "c2 is " << c2;

    std::cout << "c1-c2 is " << c1-c2;

    std::cout << "c1+c2 is " << c1+c2;

    std::cout << "c1/c2 is " << c1/c2;
    return 0;
}
