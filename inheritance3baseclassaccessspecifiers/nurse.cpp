#include <iostream>
#include "person.cpp"

class nurse : protected person{

    public:
    
        std::string public_va_nurse {"This is a public variable of nurse!"};
        nurse() = default;
        void player_info(){
            std::cout << "Accessing protected person variable from inside player : " << pro_va_person<< std::endl;
        }
};