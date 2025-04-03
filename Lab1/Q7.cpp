#include <iostream>
#include <string>
#define MIN_LENGTH 8

std::string upper_ = "QWERTYUIOPASDFGHJKLZXCVBNM";
std::string lower_ = "qwertyuiopasdfghjklzxcvbnm";
std::string digit_ = "1234567890";
std::string special_ = ",'\"!@#$%^&*\\_.()/=";
std::string pass;
bool ask = true;

bool upperFound = false, lowerFound = false, digitFound = false, specialFound = false;

int CheckCriteria(std::string passwrd) {
    
    for(int i = 0; i <= passwrd.length(); i++) {
        for(int u = 0; u < upper_.length(); u++){
            if (passwrd[i] == upper_[u]){
                //std::cout << upper_[u];
                upperFound = true;
            }
        }
        for(int l = 0; l < lower_.length(); l++){
            if (passwrd[i] == lower_[l]){
                //std::cout << lower_[l];
                lowerFound = true;
            }
        }
        for(int d = 0; d < digit_.length(); d++){
            if (passwrd[i] == digit_[d]){
               // std::cout << digit_[d];
                digitFound = true;
            }
        }
        for(int s = 0; s < special_.length(); s++){
            if (passwrd[i] == special_[s]){
               // std::cout << special_[s];
                specialFound = true;
            }
        }

    }
    std::cout << std::endl;
    return upperFound, lowerFound, digitFound, specialFound;
}


int main() {
    while(ask){
        std::cout << std::endl << "Enter a password: "; std::cin >> pass;
    if(pass.length() >= MIN_LENGTH) {
        CheckCriteria(pass);
        if(!(upperFound & lowerFound & digitFound & specialFound)) {std::cout << "Weak Password, ";}
        if(!upperFound){std::cout << "Uppercase missing! ";}
        if(!lowerFound){std::cout << "Lowercase missing! ";}
        if(!digitFound){std::cout << "Digit missing! ";}
        if(!specialFound){std::cout << "Special character missing! ";}

        if(upperFound & lowerFound & digitFound & specialFound) {
        std::cout << "Strong Password" << std::endl;
        ask = false;
        }
    }
    else if(pass.length() < MIN_LENGTH){
        std::cout << "Password it too short" << std::endl;
    }
 

    }


    return 0;
}