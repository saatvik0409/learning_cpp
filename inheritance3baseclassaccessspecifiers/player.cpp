#include <iostream>
#include "person.cpp"

class player : public person{

    public:
        std::string public_va_player {"This is a public variable of player!"};
        player() = default;

        void player_info(){
            std::cout << "Accessing protected person variable from inside player : " << pro_va_person<< std::endl;
        }


};