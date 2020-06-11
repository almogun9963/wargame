#ifndef UNTITLED_SNIPER_HPP
#define UNTITLED_SNIPER_HPP

#include "Soldier.hpp"



class Sniper : public Soldier
{
private:
    int player_id;
public:
    explicit Sniper(int player_id)
    {
        this->player_id = player_id;
        this->hp = 100;
    }

    Sniper(Sniper& to_copy)
    {
        this->player_id = to_copy.player_id;
        this->hp = to_copy.hp;
        this->location = to_copy.location;
    }


    ~Sniper()
    {
        delete this;
        *this = nullptr;
    }


    Soldier& operator=(Soldier* copy_from);
    std::pair<int,int> get_loc();
    std::pair<int, int> find_solider(std::vector<std::vector<Soldier*>> board);
    void return_max_hp();
    int hit(std::vector<std::vector<Soldier*>>& board, int rows, int cols);
    int get_id();


};


#endif //UNTITLED_SNIPER_HPP
