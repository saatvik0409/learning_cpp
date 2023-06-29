#include "person.cpp"
#include <iostream>
#ifndef ENGINEER
#define ENGINEER

class engineer : private person{

    public:
        engineer() = default;
        int pub_eng {5};
        void print_info(){
            std::cout << "Accesing the public person variable from engineer : " << public_var << std::endl;
            std::cout << "Accesing the protected person variable from engineer : " << protected_var << std::endl;
            std::cout << "Trying to access the private variable from engineer class will throw an error." << std::endl << std::endl;
        }
    protected:
        using person::public_var;
    
        
    
};

#endif