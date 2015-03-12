#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include "move.hpp"

// Prototypes
void swapPtrLocal(std::vector<int> &v1, std::vector<int> &v2);

int main(){

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
    std::cout << "vec6.at(0): " << vec6.at(0) << std::endl << std::endl;



    // USING THE MOVE CONSTRUCTOR

    myMove obj1("Hallo");
    myMove obj2(std::move(obj1));

    std::cout << "object 2: " << obj2.getChar() << " & " << obj2.getVar() << std::endl;
    std::cout << "object 1: " << ((obj1.getChar() == NULL) ? "NULL" : obj1.getChar()) << " & " << obj1.getVar() << std::endl;


    return 0;

}

void swapPtrLocal(std::vector<int> &v1, std::vector<int> &v2){
    v2 = v1;
    v1 = std::vector<int>();
}
