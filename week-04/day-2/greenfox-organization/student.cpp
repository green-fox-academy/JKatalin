//
// Created by Kata on 2019. 04. 23..
//

#include "student.h"

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization, int skippedDays) : Person (name, age, gender){
    _previousOrganization = previousOrganization;
    _skippedDays = skippedDays;
}

Student::Student() : Person(), _previousOrganization("The School of Life"), _skippedDays(0){

}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::introduce() {
   // Person::introduce();
    std::cout << "Hi, I'm " << getName() <<", a " << getAge() << " year old " << getGenderAsString() << " from " << _previousOrganization << " who skipped " << _skippedDays << " days from the course already." << std::endl;
}

void Student::skipDays(int numberOfDays) {
    _skippedDays = _skippedDays + numberOfDays;
}
