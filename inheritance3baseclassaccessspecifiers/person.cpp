#ifndef PERSON
#define PERSON
#include <iostream>

class person{

    public:
    
        std::string public_va_person {"This is a public variable of person!"};
        person() = default;
        ~person(){

        }

    protected:
        std::string pro_va_person {"This is a protected variable of person!"};

    private:
        std::string priv_va_person {"This is a private variable of person!"};

};

#endif