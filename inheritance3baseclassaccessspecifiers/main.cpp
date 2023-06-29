#include <iostream>
#include "player.cpp"
#include "nurse.cpp"
#include "engineer.cpp"

int main(){

    player player1;
    nurse nurse1;
    engineer engineer1;

    //These lines wont throw error!
    std::cout << "Accessing the public variable from player : " << player1.public_va_person << std::endl << std::endl;
    std::cout << "Accessing the protected variable from player : ";
    player1.player_info();
    std::cout << std::endl;
    engineer1.engineer_info();

    //These lines will :(
    /*
    std::cout << nurse1.public_va_person;
    std::cout << engineer1.public_va_person;
    */

    std::cout << "So basically what is happening is that we have set player class with public scope of person. What this does is all the variables of person go into player class as is in player. Any public method would remain public, any private method would remain private, any protected method would remain private. However for nurse (which is protected scope class of person), all the public variables along with protected variables would be imported in protected scope. And for engineer class, the variables with each scope will be importred as private!" << std::endl;
    return 0;
}