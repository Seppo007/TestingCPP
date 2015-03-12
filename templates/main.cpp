#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include "templates.hpp"

// Prototypes
void swapPtrLocal(std::vector<int> &v1, std::vector<int> &v2);

int main(){

    double a = 55.12;
    float b = 55.999f;

    std::cout << "Maximum von " << a << " & " << b << ": " << tempMax(a, b) << std::endl;

    std::cout << getaString(a) << std::endl;

    myClass<std::string> klasse("Hallo Welt");
    std::cout << "Attribut von Klasse hat den Inhalt: \"" << klasse.getAttrib() << "\"" << std::endl;

    std::cout << "a ist vom Typ " << getTypeOf(a) << " und hat den Wert: " << a << std::endl << std::endl;

    return 0;

}

void swapPtrLocal(std::vector<int> &v1, std::vector<int> &v2){
    v2 = v1;
    v1 = std::vector<int>();
}
