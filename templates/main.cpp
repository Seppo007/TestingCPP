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


    std::cout << "move semantic for vector: " << std::endl;
    std::vector <int> vec1={1,2,3,4,5,6,7,8,9};
    std::vector <int> vec2;
    std::cout << "vec1.size(): " << vec1.size() <<  " vec2.size(): " << vec2.size() << std::endl;
    vec2= std::move(vec1);
    std::cout << "MOVE JUST HAPPENED HERE" << std::endl;
    std::cout << "vec1.size(): " << vec1.size() <<  " vec2.size(): " << vec2.size() << std::endl;
    std::cout <<"copy semantic for vector: " << std::endl;
    std::vector <int> vec3;
    std::cout << "vec2.size(): " << vec2.size() <<  " vec3.size(): " << vec3.size() << std::endl;
    vec3= vec2;
    std::cout << "vec2.size(): " << vec2.size() <<  " vec3.size(): " << vec3.size() << std::endl << std::endl;


    // Könnte auch mit pointerverschiebung realisiert werden?
    std::vector <int> vec5={1,2,3,4,5,6,7,8,9};
    std::vector <int> vec6;

    std::cout << "vec5.size(): " << vec5.size() <<  " vec6.size(): " << vec6.size() << std::endl;

    swapPtrLocal(vec5, vec6);

    std::cout << "vec5.size(): " << vec5.size() <<  " vec6.size(): " << vec6.size() << std::endl;
    std::cout << "vec6.at(0): " << vec6.at(0) << std::endl;

    return 0;

}

void swapPtrLocal(std::vector<int> &v1, std::vector<int> &v2){
    v2 = v1;
    v1 = std::vector<int>();
}
