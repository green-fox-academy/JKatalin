//
// Created by Kata on 2019. 04. 27..
//

#ifndef GARDEN_GARDEN_H
#define GARDEN_GARDEN_H

#include "flower.h"
#include "tree.h"
#include <vector>

class Garden {

public:
    void addFlower(Flower newFlower);
    void addTree(Tree newTree);
    void report();
    void waterAdd(int water);

private:
    std::vector<Flower> _flowers;
    std::vector<Tree> _trees;
};


#endif //GARDEN_GARDEN_H
