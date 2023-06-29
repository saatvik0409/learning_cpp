#include <iostream>
#include "person.h"

class player : public person{

    friend std::ostream& operator <<(std::ostream& out, const player& player);

    public:

        player() = default;
        player(std::string game_inp);
        ~player();

    public:
        
        std::string game_name{};

};
