#ifndef MOVE
#define MOVE
#include <iostream>

class myMove{

private:
    char* charAttrib;
    int var;

public:

    // Constructors
    myMove(char *ch, int v) : charAttrib(ch), var(v){}
    myMove(char *ch) : myMove(ch, 100){}
    //myMove() : myMove("Hallo"){} ? why

    // Move Constructor
    myMove(myMove&& o) : charAttrib(nullptr), var(0){
        charAttrib = o.charAttrib;
        var = o.var;

        o.charAttrib = NULL;
        o.var = 0;
    }

    // Methods
    char* getChar(){
        return charAttrib;
    }

    int getVar(){
        return var;
    }

};



#endif
