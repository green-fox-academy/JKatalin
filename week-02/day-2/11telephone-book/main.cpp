#include <iostream>
#include <map>
#include <vector>

int main() {
    std::map<std::string, std::string> mapTelephone;

    mapTelephone["William A. Lathan"] = "405-709-1865";
    mapTelephone["John K. Miller"] = "402-247-8568";
    mapTelephone["Hortensia E. Foster"] = "606-481-6467";
    mapTelephone["Amanda D. Newland"] = "319-243-5613";
    mapTelephone["Brooke P. Askew"] = "307-687-2982";
    mapTelephone["Amanda D. Neland"] = "307-687-2982"; //just to try what happens, if more value is same

    std::cout << "John K. Miller's phone number is: " << mapTelephone["John K. Miller"] << std::endl;

    //searching value (and its key) with new string variable
    std::string numbOwner = "";
    std::map<std::string, std::string>::iterator itTelephone;
    for (itTelephone = mapTelephone.begin(); itTelephone != mapTelephone.end(); itTelephone++) {
        if (itTelephone->second == "307-687-2982") {
            numbOwner = itTelephone->first;
            std::cout << "The 307-687-2982 number is " << numbOwner << "'s phone number." << std::endl;
        }
    }
    if (numbOwner == "") {
        std::cout << "There is no 307-687-2982 number in the telephone book." << std::endl;
    }

    //searching value (and its key) with boolean variable
    bool numberInBook = false;
    for (itTelephone = mapTelephone.begin(); itTelephone != mapTelephone.end(); itTelephone++) {
        if (itTelephone->second == "307-687-2982") {
            numberInBook = true;
            std::cout << "The 307-687-2982 number is " << itTelephone->first << "'s phone number." << std::endl;
        }
    }
    if (!numberInBook) {
        std::cout << "There is no 307-687-2982 number in the telephone book." << std::endl;
    }


    if (mapTelephone.count("Chris E. Myers") != 0) {
        std::cout << "Chris E. Myers's phone number is: " << mapTelephone["Chris E. Myers"] << std::endl;
    } else {
        std::cout << "There is no Chris E. Myers in the telephone book." << std::endl;
    }


    return 0;
}


//What is John K. Miller's phone number?
//Whose phone number is 307-687-2982?
//Do we know Chris E. Myers' phone number?