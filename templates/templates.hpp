#ifndef TEMPLATES
#define TEMPLATES
#include <iostream>
#include <string>
#include <sstream>
#include <typeinfo>

template <typename T, typename U>
T tempMax(T first, U second){
    return (first > second) ? first : second;
}

template<typename T>
std::string getaString(T var){
    std::string str = "Uebergebenes Argument: ";
    std::stringstream ret;
    ret << str << var;
    return ret.str();
}

template<typename T>
std::string getTypeOf(T var){
    std::string ret = typeid(var).name();

    if(std::string(typeid(var).name()) == "i")
        ret = "integer";

    if(std::string(typeid(var).name()) == "d")
        ret = "double";

    if(std::string(typeid(var).name()) == "f")
        ret = "float";

    if(std::string(typeid(var).name()) == "c")
        ret = "char";

    if(std::string(typeid(var).name()) == "ss")
        ret = "StringStream";

    return ret;
}

template <typename T>
void swapPtr(T& first, T& second){
    T tmp = first;
    first = second;
    second = tmp;
    std::cout << "Successfully switched!" << std::endl;
}

template<typename T>
class myClass{

private:
    T attrib;
    std::string *myString = new std::string("Hallo Welt");

public:

    // Constructor
    myClass(T attribute){
        attrib = attribute;
    }

    // Destructor
    ~myClass(){
        delete myString;
    }

    T getAttrib(){
        return attrib;
    }

    std::string* getString(){
        return myString;
    }

};

#endif
