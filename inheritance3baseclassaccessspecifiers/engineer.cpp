#include <iostream>
#include "person.cpp"

class engineer : private person{

    public:
    
        std::string public_va_engineer {"This is a public variable of engineer!"};
        engineer() = default;
        void engineer_info(){
            std::cout << "Accessing protected person variable from inside engineer : " << pro_va_person << std::endl;
        }
};