#include <iostream>

#include "PostIt.h"


int main() {

    PostIt form1("orange", "Idea 1", "blue");
    PostIt form2("pink", "Awesome", "black");
    PostIt form3("yellow", "Superb!", "green");

    std::cout << form1.getBackgroundColor() << std::endl;
    std::cout << form2.getText() << std::endl;
    std::cout << form3.getTextColor() << std::endl;

    return 0;
}