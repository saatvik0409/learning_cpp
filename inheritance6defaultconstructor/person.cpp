#include <iostream>

#ifndef PERSON

#define PERSON

class person{

    public:
        person(){
            std::cout << "Constructing perosn class ... " << std::endl;
        }
        int private_var = {5};

    protected:
        int protected_var = {6};

    public:
        int public_var= {7};

};

#endif