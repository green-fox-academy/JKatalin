//
// Created by Kata on 2019. 04. 23..
//

#include "sponsor.h"

Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company, int hiredStudents) : Person(name, age, gender), _company(company), _hiredStudents(hiredStudents){

}

Sponsor::Sponsor() : Person(), _company("Google"), _hiredStudents(0){

}

void Sponsor::hire() {
    _hiredStudents++;
}

void Sponsor::introduce() {
    std::cout << "Hi, I'm " << getName() <<", a " << getAge() << " year old " << getGenderAsString() << " who represents " << _company << " and hired " << _hiredStudents << " students so far." << std::endl;
}

void Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}
