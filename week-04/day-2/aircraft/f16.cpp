//
// Created by Kata on 2019. 05. 01..
//

#include "f16.h"

F16::F16() : Aircraft("F16", 8, 30)

{
   /* _type = type;
    _maxAmmo = maxAmmo;
    _currentAmmo = currentAmmo;
    _baseDemage = baseDemage;             nem jó, mert így felülírható az ősosztály értéke (pl ha már az ősosztály számolt vmt */
}


bool F16::isPriority()
{
    return false;
}

