#include <iostream>
#include <string>


int main() {
    short int NumOfVows;
    std::string MyStr;
    std::cout << "Input a string: ";
    std::cin >> MyStr;

    std::string vows = "AEIOUYÄÖ";


    std::string UpMyString = MyStr;
    std::string string2 = UpMyString;  //creating another str to compare against


    for (char &OneLettr : UpMyString){   //this loop checks for vowels and makes string uppercase
        OneLettr = std::toupper(OneLettr);
        for(char &vow : vows){
            if(OneLettr == vow){NumOfVows++;}
        }
    }
    for (int i = 0; i <= UpMyString.length(); i++){
        UpMyString[i] = string2[string2.length()-1-i];  // reverses the order
    }

    std::cout << UpMyString << " " << NumOfVows;
    return 0;
}

