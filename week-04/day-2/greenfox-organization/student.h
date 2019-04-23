//
// Created by Kata on 2019. 04. 23..
//

#ifndef GREENFOX_ORGANIZATION_STUDENT_H
#define GREENFOX_ORGANIZATION_STUDENT_H

#include "person.h"

class Student : public Person{
public:
    Student(std::string name, int age, Gender gender, std::string previousOrganization, int skippedDays = 0);
    Student();

    void getGoal() override;
    void introduce() override;
    void skipDays(int numberOfDays);

private:
    std::string _previousOrganization;
    int _skippedDays;

};


#endif //GREENFOX_ORGANIZATION_STUDENT_H
