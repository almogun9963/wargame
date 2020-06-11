#ifndef UNTITLED_SNIPERCOMMANDER_HPP
#define UNTITLED_SNIPERCOMMANDER_HPP

#include "Soldier.hpp"



class SniperCommander : public Soldier
{
private:
    int player_id;
public:
    explicit SniperCommander(int player_id)
    {
        this->player_id = player_id;
        this->hp = 120;
    }

    SniperCommander(SniperCommander& to_copy)
    {
        this->player_id = to_copy.player_id;
        this->hp = to_copy.hp;
        this->location = to_copy.location;
    }


    ~SniperCommander()
    {
        delete this;
    }

    int hit(std::vector<std::vector<Soldier*>> & board, int rows, int cols);
    Soldier& operator=(Soldier* copy_from);
    int get_id();
    std::pair<int, int> find_solider(std::vector<std::vector<Soldier*>> board);
    void return_max_hp();
    std::pair<int,int> get_loc();





};


#endif //UNTITLED_SNIPERCOMMANDER_HPP
