#include <iostream>
#include <string>
#include <memory>
#include "../templates/templates.hpp"

int main(){

    std::unique_ptr<std::string> firstSmPtr(new std::string("Hallo Welt"));
    std::unique_ptr<std::string> scndSmPtr (new std::string("Hallo Welt 2"));

    std::string *firstPtr = new std::string("Hallo Welt");
    std::string *scndPtr = new std::string("Hallo Welt 2");

    std::cout << "First Pointer: " << *firstPtr << std::endl;
    std::cout << "Second Pointer: " << *scndPtr << std::endl;

    swapPtr(firstPtr, scndPtr);

    std::cout << "First Pointer: " << *firstPtr << std::endl;
    std::cout << "Second Pointer: " << *scndPtr << std::endl;


    std::unique_ptr<myClass<int>> klasse;
    {
       klasse.reset(new myClass<int>(250));
    }

    //std::cout << klasse.get() << std::endl;

    std::string *tmp = (*klasse).getString();

    // klasse.reset(new myClass<int>(100));

    // std::unique_ptr<myClass<int>, ... > --> ... nicht erforderlich zu setzen (custom deleter) siehe folgende Ausgabe
    std::cout << "Hier ---> " << *tmp << std::endl;


    return 0;

}
