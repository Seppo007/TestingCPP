#include <iostream>
#include <string>
#include <memory>
#include "templates.hpp"

int main(){

    double a = 55.12;
    float b = 55.999f;

    std::cout << "Maximum von " << a << " & " << b << ": " << tempMax(a, b) << std::endl;

    std::cout << getaString(a) << std::endl;

    myClass<std::string> klasse("Hallo Welt");
    std::cout << "Attribut von Klasse hat den Inhalt: \"" << klasse.getAttrib() << "\"" << std::endl;

    std::cout << "a ist vom Typ " << getTypeOf(a) << " und hat den Wert: " << a << std::endl;

    return 0;

}
