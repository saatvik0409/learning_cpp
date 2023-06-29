#include <iostream>
#include "player.h"

int main(){
    std::cout << "Protected variables are variables of a class which are accessible from the derived class however they are inaccessible from outside the derived class!" << std::endl << std::endl;
    
    player player1("Cricket");
    player player2("Basketball","Ramesh","Suresh");
    
    std::cout << player2 << std::endl;  
    return 0;
}