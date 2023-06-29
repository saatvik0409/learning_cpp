#include "player.h"
#include <iostream>

std::ostream& operator<<(std::ostream& out, const player& player){
    out << "Player Name : [" << player.get_first_name() << " " << player.get_last_name() << "]; Sport : [" << player.game_name << "]";
    return out; 
}

player::player(std::string inp_game){
    game_name = inp_game;
}

player::~player(){
    
}


