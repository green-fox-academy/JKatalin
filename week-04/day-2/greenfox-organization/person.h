//
// Created by Kata on 2019. 04. 23..
//


#ifndef GREENFOX_ORGANIZATION_PERSON_H
#define GREENFOX_ORGANIZATION_PERSON_H

#include <iostream>

enum Gender {
    MALE,
    FEMALE
};

class Person {
public:
    Person(std::string name, int age, Gender gender);
    Person();

    const std::string &getName() const;
    int getAge() const;
    Gender getGender() const;
    virtual void introduce();
    virtual void getGoal();
    std::string getGenderAsString();

private:
    std::string _name;
    int _age;
    Gender _gender;

};


#endif //GREENFOX_ORGANIZATION_PERSON_H
