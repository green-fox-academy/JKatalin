//
// Created by Kata on 2019. 04. 23..
//

#ifndef GREENFOX_ORGANIZATION_SPONSOR_H
#define GREENFOX_ORGANIZATION_SPONSOR_H

#include "person.h"

class Sponsor : public Person {
public:
    Sponsor(std::string name, int age, Gender gender, std::string company, int hiredStudents = 0);
    Sponsor();

    void introduce() override;
    void getGoal() override;
    void hire();
    
private:
    std::string _company;
    int _hiredStudents;

};


#endif //GREENFOX_ORGANIZATION_SPONSOR_H
