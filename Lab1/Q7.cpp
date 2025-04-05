#include <iostream>
#include <string>
#define MIN_LENGTH 8

std::string upper_ = "QWERTYUIOPASDFGHJKLZXCVBNM";  //defining upper- and lowercase
std::string lower_ = "qwertyuiopasdfghjklzxcvbnm"; 
std::string digit_ = "1234567890";                  //defining numbers and special chars
std::string special_ = ",'\"!@#$%^&*\\_.()/=";
std::string pass;
bool ask = true;   //should we keep asking user for password?

bool upperFound = false, lowerFound = false, digitFound = false, specialFound = false; //boolians for recognizing conditions

void CheckCriteria(std::string passwrd) {           //#################################################################################################
                                                    //#  after finishing this, I got to know that there are functions like isupper, islower, isdigit  #
                                                    //#################################################################################################
    for(int i = 0; i < passwrd.length(); i++) {   //main for loop goes throught each element in password
        for(int u = 0; u < upper_.length(); u++){   //compares if element of password is in uppercase list
            if (passwrd[i] == upper_[u]){
                //std::cout << upper_[u];
                upperFound = true;
            }
        }
        for(int l = 0; l < lower_.length(); l++){   //compares if element of password is in lowercase list
            if (passwrd[i] == lower_[l]){
                //std::cout << lower_[l];
                lowerFound = true;
            }
        }
        for(int d = 0; d < digit_.length(); d++){   //compares if element of password is in digit list
            if (passwrd[i] == digit_[d]){
               // std::cout << digit_[d];
                digitFound = true;
            }
        }
        for(int s = 0; s < special_.length(); s++){     //compares if element of password is in special char list
            if (passwrd[i] == special_[s]){
               // std::cout << special_[s];
                specialFound = true;
            }
        }

    }
    std::cout << std::endl;
}


int main() {
    while(ask){
        std::cout << std::endl << "Enter a password: "; std::cin >> pass;
        if(pass.length() >= MIN_LENGTH) {   //compares password length to MIN_LENGTH
            CheckCriteria(pass);
            if(!(upperFound & lowerFound & digitFound & specialFound)) {std::cout << "Weak Password, ";} //checks if some conditions do not meet
            if(!upperFound){std::cout << "Uppercase missing! ";}  //prints out missing conditions
            if(!lowerFound){std::cout << "Lowercase missing! ";}
            if(!digitFound){std::cout << "Digit missing! ";}
            if(!specialFound){std::cout << "Special character missing! ";}

            if(upperFound & lowerFound & digitFound & specialFound) {  //if all found in password, prints ..
            std::cout << "Strong Password" << std::endl;
            ask = false;
            }
        }
        else if(pass.length() < MIN_LENGTH){    //if password too short, prints..
            std::cout << "Password it too short" << std::endl;
        }
    }


    return 0;
}

