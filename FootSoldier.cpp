#pragma once
#include "FootSoldier.hpp"



int FootSoldier::hit(std::vector<std::vector<Soldier*>>& board, int rows, int cols)
{
    std::pair<int, int> enemy = find_solider(board);
    board[enemy.first][enemy.second]->hp -= 50;
    if(board[enemy.first][enemy.second]->hp <= 0)
    {
        delete board[enemy.first][enemy.second];
        board[enemy.first][enemy.second] = 0 ;
        return 0;
    }
    return 0;
}



std::pair<int,int> FootSoldier::get_loc(){
    return {this->location.first,this->location.second};
}



int FootSoldier::get_id(){
    return this->player_id;
}


Soldier& FootSoldier::copy()
{

    FootSoldier* a = new FootSoldier(this->get_id());
    FootSoldier& ans = *a;
    return ans;
}

std::pair<int, int> FootSoldier::find_solider(std::vector<std::vector<Soldier*>> board)
{
    std::pair<int, int> ans;
    double min_dis = DBL_MAX;
    double mydistance;




    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board.at(0).size(); ++j)
        {
            if (board[i][j] != nullptr && board[i][j]->get_id() != player_id && board[i][j]->get_id() != 0 )
            {


                mydistance = FootSoldier::dist(this->get_loc(), {i,j});
                if (mydistance < min_dis)
                {
                    ans = {i,j};
                    min_dis = mydistance*mydistance;
                }
            }
        }
    }
    return ans;
}
double FootSoldier::dist(std::pair<int, int> from, std::pair<int, int> to){
    return sqrt(pow(from.first-to.first,2) + pow(from.second - to.second,3));
}

void FootSoldier::return_max_hp(){
    this->hp = 50;
}

