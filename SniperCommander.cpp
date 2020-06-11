#pragma once
#include "SniperCommander.hpp"
#include "Sniper.hpp"




int SniperCommander::hit(std::vector<std::vector<Soldier*>> & board, int rows, int cols)
{
    return 0;
}

std::pair<int,int> SniperCommander::get_loc()
{
    return{0,0};
}

int SniperCommander::get_id()
{
    return 0;
}

Soldier &SniperCommander::operator=(Soldier *copy_from) {
    Soldier* a = new SniperCommander(copy_from->get_id());
    Soldier & ans = *a;
    return ans;
}

std::pair<int, int> SniperCommander::find_solider_to_active_the_skill(std::vector<std::vector<Soldier*>> board)
{
    return{0,0};
}

void SniperCommander::return_to_max_health()
{

}
