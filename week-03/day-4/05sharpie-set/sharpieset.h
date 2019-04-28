//
// Created by Kata on 2019. 04. 22..
//

#ifndef INC_05SHARPIE_SET_SHARPIESET_H
#define INC_05SHARPIE_SET_SHARPIESET_H

#include "Sharpie.h"
#include <vector>


class Sharpieset {
public:
    void countUsable();
    void removeTrash();
    void addSharpie(Sharpie *sharpie);

    void printSet();

private:
    std::vector<Sharpie *> _sharpies;
};


#endif //INC_05SHARPIE_SET_SHARPIESET_H
