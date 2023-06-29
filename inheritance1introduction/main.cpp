#include <iostream>
#include "player.h"

int main(){
    std::cout << std::endl;
    std::cout <<
    "By adding const keyword at the end of function definition in a class, you ensure that the member function does not change object!" << std::endl <<
    "std::ostream& operator<<(std::ostream& out, const object& object) is the syntax for custom output" <<std::endl <<std::endl;
    std::cout << 
    "Friend function is a function which has access to all the private members of a class. very cool!" << std::endl << std::endl;

    std::cout << std::endl;
    player player1("Cricket");
    player player2("Basketball");
    player1.set_first_name("Ramesh");
    player1.set_last_name("Happy");
    std::cout << player1 << std::endl;  
    return 0;
}