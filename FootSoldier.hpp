#ifndef UNTITLED_FOOTSOLDIER_HPP
#define UNTITLED_FOOTSOLDIER_HPP

#include "Soldier.hpp"
#include "Board.hpp"



class FootSoldier : public Soldier
{
private:
    int player_id;
public:

    FootSoldier(int player_id)
    {
        this->player_id = player_id;
        this->hp = 100;
    }

    FootSoldier(FootSoldier& to_copy)
    {
        this->player_id = to_copy.player_id;
        this->hp = to_copy.hp;
        this->location = to_copy.location;
    }


    ~FootSoldier()
    {
        delete this;
    }

    int hit(std::vector<std::vector<Soldier*>> & board, int rows, int cols);
    std::pair<int,int> get_loc();
    int get_id();
    Soldier& copy();
    std::pair<int, int> find_solider(std::vector<std::vector<Soldier*>> board);
    static double dist(std::pair<int, int> from, std::pair<int, int> to);
    void return_max_hp();




};


#endif //UNTITLED_FOOTSOLDIER_HPP
