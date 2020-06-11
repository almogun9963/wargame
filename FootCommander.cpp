#pragma once
#include "FootCommander.hpp"
#include "FootSoldier.hpp"



int FootCommander::hit(std::vector<std::vector<Soldier*>> & board, int rows, int cols){
    return 0;
}

std::pair<int,int> FootCommander::get_loc(){
    return{0,0};
}

int FootCommander::get_id(){
    return 0;
}

Soldier& FootCommander::operator=(Soldier* copy_from){
    Soldier* a = new FootCommander(copy_from->get_id());
    Soldier & ans = *a;
    return ans;
}
std::pair<int, int> FootCommander::find_solider(std::vector<std::vector<Soldier*>> board){

    return{0,0};
}

void FootCommander::return_max_hp(){

}