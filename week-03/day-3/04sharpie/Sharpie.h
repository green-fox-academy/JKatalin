//
// Created by Kata on 2019. 04. 17..
//

#ifndef INC_04SHARPIE_SHARPIE_H
#define INC_04SHARPIE_SHARPIE_H

#include <iostream>


class Sharpie {
public:
    Sharpie(std::string color, float width, float inkAmount = 100);

    void setColor(const std::string &color);
    void setWidth(float width);
    void setInkAmount(float inkAmount);

    const std::string &getColor() const;
    float getWidth() const;
    float getInkAmount() const;

    void use(int inkDec);

private:
    std::string _color;
    float _width;
    float _inkAmount;

};


#endif //INC_04SHARPIE_SHARPIE_H
