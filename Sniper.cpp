#pragma once
#include "Sniper.hpp"



int Sniper::hit(std::vector<std::vector<Soldier*>>& board, int rows, int cols){


    std::pair<int,int> attack = find_solider(board);

    if(board[attack.first][attack.second]->hp <= 0){
        delete board[attack.first][attack.second];
        board[attack.first][attack.second] = 0;
        return 1;
    }
    return 1;
}
std::pair<int,int> Sniper::get_loc(){

    return {this->location.first, this->location.second};
}


int Sniper::get_id(){

    return this->player_id;
}

Soldier &Sniper::operator=(Soldier *copy_from)
{

    Soldier* the_copy = new Sniper(copy_from->get_id());
    the_copy->hp = copy_from->hp;
    Soldier & ret = *the_copy;


    return ret;
}
std::pair<int, int> Sniper::find_solider(std::vector<std::vector<Soldier*>> board){
    int max = 0;
    std::pair<int,int> ans ;

    for (int i = 0; i < board.size(); ++i){

        for (int j = 0; j < board.at(0).size(); ++j){

            if (board[i][j] != nullptr && board[i][j]->get_id()!=player_id){

                if(board[i][j]->hp > max){

                    ans = {i,j};

                    max = board[i][j]->hp;
                }
            }
        }
    }
    return ans;
}

void Sniper::return_max_hp()
{
    this->hp = 50;
}

