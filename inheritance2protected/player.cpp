#include "player.h"
#include <iostream>

std::ostream& operator<<(std::ostream& out, const player& player){
    out << "Player Name : [" << player.get_first_name() << " " << player.get_last_name() << "]; Sport : [" << player.game_name << "]";
    return out; 
}

player::player(std::string inp_game){
    game_name = inp_game;
}

player::player(std::string game_inp,std::string f_inp,std::string l_inp){
    first_name = f_inp;
    last_name = l_inp;
    game_name = game_inp;
}

player::~player(){
    
}


