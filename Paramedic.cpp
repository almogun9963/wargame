#pragma once
#include "Paramedic.hpp"

int Paramedic::hit(std::vector<std::vector<Soldier*>> & board, int rows, int cols){
    find_solider(board);
   return 0;
}

std::pair<int,int> Paramedic::get_loc(){
    return {this->location.first, this->location.second};
}

int Paramedic::get_id(){
    return this->player_id;
}



Soldier &Paramedic::operator=(Soldier *copy_from){
    Soldier* a = new Paramedic(copy_from->get_id());

    Soldier & ans = *a;
    return ans;
}

std::pair<int, int> Paramedic::find_solider(std::vector<std::vector<Soldier*>> board)
{

    for (int i = this->get_loc().first; i < this->get_loc().first+1; ++i){

        for (int j = this->get_loc().second; j < this->get_loc().second+1; ++j){

            if (board[i][j] != nullptr && i != j && board[i][j]->get_id() == player_id)
            {

                board[i][j]->return_max_hp();

            }
        }
    }


    return {0,0};
}

void Paramedic::return_max_hp(){
    this->hp = 20;
}

