#include <iostream>
#include <vector>
#include "Sharpie.h"
#include "Sharpieset.h"

int main() {

    Sharpie sharpGirl("pink", 2, 50);
    Sharpie sharpBoy("blue", 5, 15);
    Sharpie sharp3("orange", 5, 0);
    Sharpie sharp4("purple", 5, 15);

    Sharpieset sharpiePaletta;
    sharpiePaletta.addSharpie(&sharpBoy);
    sharpiePaletta.addSharpie(&sharpGirl);
    sharpiePaletta.addSharpie(&sharp3);
    sharpiePaletta.addSharpie(&sharp4);
    sharpiePaletta.printSet();

    sharpiePaletta.countUsable();
    sharpBoy.use(30);
    sharpiePaletta.printSet();
    sharpiePaletta.removeTrash();
    sharpiePaletta.countUsable();


    return 0;
}