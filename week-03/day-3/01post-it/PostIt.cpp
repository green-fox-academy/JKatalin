//
// Created by Kata on 2019. 04. 17..
//

#include "PostIt.h"

PostIt::PostIt(std::string backgroundColor, std::string text, std::string textColor){
    setBackgroundColor(backgroundColor);
    setText(text);
    setTextColor(textColor);
}


void PostIt::setBackgroundColor(const std::string &backgroundColor) {
    _backgroundColor = backgroundColor;
}

void PostIt::setText(const std::string &text) {
    _text = text;
}

void PostIt::setTextColor(const std::string &textColor) {
    _textColor = textColor;
}

const std::string &PostIt::getBackgroundColor() const {
    return _backgroundColor;
}

const std::string &PostIt::getText() const {
    return _text;
}

const std::string &PostIt::getTextColor() const {
    return _textColor;
}
