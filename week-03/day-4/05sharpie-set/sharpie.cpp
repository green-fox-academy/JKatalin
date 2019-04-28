//
// Created by Kata on 2019. 04. 22..
//

#include "Sharpie.h"

Sharpie::Sharpie(std::string color, float width, float inkAmount ){
    setColor(color);
    setWidth(width);
    setInkAmount(inkAmount);
}

void Sharpie::setColor(const std::string &color) {
    _color = color;
}

void Sharpie::setWidth(float width) {
    _width = width;
}

void Sharpie::setInkAmount(float inkAmount) {
    _inkAmount = inkAmount;
}

const std::string &Sharpie::getColor() const {
    return _color;
}

float Sharpie::getWidth() const {
    return _width;
}

float Sharpie::getInkAmount() const {
    return _inkAmount;
}

void Sharpie::use(int inkDec) {
    _inkAmount = _inkAmount - inkDec;

}
