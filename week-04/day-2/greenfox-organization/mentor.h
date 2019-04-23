//
// Created by Kata on 2019. 04. 23..
//

#ifndef GREENFOX_ORGANIZATION_MENTOR_H
#define GREENFOX_ORGANIZATION_MENTOR_H

#include "person.h"

enum Level{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person{
public:
    Mentor(std::string name, int age, Gender gender, Level level);
    Mentor();

    void getGoal()override ;
    void introduce() override ;
    std::string getLevelInString();

private:
    Level _level;
};


#endif //GREENFOX_ORGANIZATION_MENTOR_H
