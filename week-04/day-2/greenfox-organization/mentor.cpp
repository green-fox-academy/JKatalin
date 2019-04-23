//
// Created by Kata on 2019. 04. 23..
//

#include "mentor.h"

Mentor::Mentor(std::string name, int age, Gender gender, Level level) : Person (name, age, gender), _level(level){

}

Mentor::Mentor() : Person(), _level(INTERMEDIATE){

}

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce() {
    std::cout << "Hi, I'm " << getName() <<", a " << getAge() << " year old " << getGenderAsString() << " " << getLevelInString() << " mentor." << std::endl;
}

std::string Mentor::getLevelInString() {
    switch (_level){
        case JUNIOR:
            return "junior";
        case INTERMEDIATE:
            return "intermediate";
        case SENIOR:
            return "senior";
    }
}
