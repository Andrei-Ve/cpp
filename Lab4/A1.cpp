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
            double len1, ang1, len2, ang2, len3, ang3;
            len1 = sqrt(real*real+imag*imag);
            ang1 = atan(imag/real);

            len2 = sqrt(other.real*other.real+other.imag*other.imag);
            ang2 = atan(other.imag/other.real);

            len3 = len1/len2;
            ang3 = ang1/ang2;

            

            return Complex(real/other.real, imag/other.imag);
        }


        friend std::ostream& operator<<(std::ostream& os, const Complex& c);

        // void display() const {
        //     std::cout << real << " + " << imag << "i" <<std::endl;
        // }
        
};

std::ostream& operator<<(std::ostream& os, const Complex& c){
    os << "Complex number is " << c.real << " + " << c.imag << "i" << std::endl;
    return os;
}


int main(){
    Complex c1(2.5, 3.8), c2(4.2, 0.1);

    std::cout << "c1 is " << c1;
    std::cout << "c2 is " << c2;

    Complex c3 = c1-c2;
    std::cout << "c3 (c1-c2) is " << c3;

    Complex c4 = c1+c2;
    std::cout << "c4 (c1+c2) is " << c4;

    Complex c5 = c1/c2;
    std::cout << "c4 (c1/c2) is " << c5;
    
    return 0;
}
