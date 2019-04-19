#include <iostream>
#include <map>
#include <vector>


int main() {
    std::map<std::string, std::string> mapISBN;

    mapISBN["978-1-60309-452-8"] = "A Letter to Jo";
    mapISBN["978-1-60309-459-7"] = "Lupus";
    mapISBN["978-1-60309-444-3"] = "Red Panda and Moon Bear";
    mapISBN["978-1-60309-461-0"] = "The Lab";

    std::map<std::string, std::string>::iterator itISBN;
    for (itISBN = mapISBN.begin(); itISBN != mapISBN.end(); itISBN++) {
        std::cout << itISBN->second << " (ISBN: " << itISBN->first << ") " << std::endl;
    }

    mapISBN.erase("978-1-60309-444-3");

    for (itISBN = mapISBN.begin(); itISBN != mapISBN.end(); itISBN++) {
        if (itISBN->second == "The Lab") {
            mapISBN.erase(itISBN);
        }
    }

    mapISBN["978-1-60309-450-4"] = "They Called Us Enemy";
    mapISBN["978-1-60309-453-5"] = "Why Did We Trust Him?";

    if (mapISBN.count("478-0-61159-424-8") != 0) {
        std::cout << "There is an associated value with key 478-0-61159-424-8." << std::endl;
    } else {
        std::cout << "There isn't an associated value with key 478-0-61159-424-8." << std::endl;
    }

    std::cout << mapISBN["978-1-60309-453-5"] << std::endl;


    std::cout << std::endl;
    std::map<std::string, std::string>::iterator itISBNControll;
    for (itISBNControll = mapISBN.begin(); itISBNControll != mapISBN.end(); itISBNControll++) {
        std::cout << itISBNControll->second << " (ISBN: " << itISBNControll->first << ") " << std::endl;
    }

    return 0;
}