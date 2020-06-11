#pragma once
#include "ParamedicCommander.hpp"
#include "Paramedic.hpp"

int ParamedicCommander::hit(std::vector<std::vector<Soldier*>> & board, int rows, int cols)
{
    return 1;
}
std::pair<int,int> ParamedicCommander::get_loc()
{
    return{0,0};
}
int ParamedicCommander::get_id()
{
    return 0;
}

Soldier &ParamedicCommander::operator=(Soldier *copy_from) {

    Soldier* a = new ParamedicCommander(copy_from->get_id());
    Soldier & ans = *a;
    return ans;
}

void ParamedicCommander::return_to_max_health()
{

}

std::pair<int, int> ParamedicCommander::find_solider_to_active_the_skill(std::vector<std::vector<Soldier*>> board)
{
    return{0,0};
}