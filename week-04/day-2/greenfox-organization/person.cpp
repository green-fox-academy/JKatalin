//
// Created by Kata on 2019. 04. 23..
//

#include "person.h"

Person::Person(std::string name, int age, Gender gender) : _name(name), _age(age), _gender(gender) {
    //_name = name;
    //_age = age;
    //_gender = gender;
}

Person::Person() : _name("Jane Doe"), _age(30), _gender(FEMALE) {

}

const std::string &Person::getName() const {
    return _name;
}

int Person::getAge() const {
    return _age;
}

Gender Person::getGender() const {
    return _gender;
}

void Person::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << getGenderAsString() << std::endl;
}

std::string Person::getGenderAsString() {
    switch (_gender) {
        case MALE:
            return "male";
        case FEMALE:
            return "female";
    }
}

void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!" << std::endl;
};