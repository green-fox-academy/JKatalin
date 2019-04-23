//
// Created by Kata on 2019. 04. 23..
//

#ifndef GREENFOX_ORGANIZATION_COHORT_H
#define GREENFOX_ORGANIZATION_COHORT_H

#include <iostream>
#include <vector>
#include "student.h"
#include "mentor.h"

class Cohort {
public:
    Cohort(std::string name);

    void addStudent(Student* student);
    void addMentor(Mentor* mentor);
    void info();


private:
    std::string _name;
    std::vector<Student*> _students;
    std::vector<Mentor*> _mentors;

};


#endif //GREENFOX_ORGANIZATION_COHORT_H
