
#include "count_letter.h"


std::map<char, int> letterDictionary(std::string string1)
{
    std::map<char, int> mapLetter;
    for (int i = 0; i < string1.size(); ++i) {
        mapLetter[string1.at(i)]++;
    }
    return mapLetter;
}

