#ifndef UNTITLED_PARAMEDIC_HPP
#define UNTITLED_PARAMEDIC_HPP

#include "Soldier.hpp"



class Paramedic : public Soldier {
private:
    int player_id;
public:
    explicit Paramedic(int player_id)
    {
        this->player_id = player_id;
        this->hp = 100;
    }

    Paramedic(Paramedic& to_copy)
    {
        this->player_id = to_copy.player_id;
        this->hp = to_copy.hp;
        this->location = to_copy.location;
    }


    ~Paramedic()
    {
        delete this;
    }

    int hit(std::vector<std::vector<Soldier*>> & board, int rows, int cols);
    int get_id();
    std::pair<int, int> find_solider(std::vector<std::vector<Soldier*>> board);
    void return_max_hp();
    std::pair<int,int> get_loc();
    Soldier& operator=(Soldier* copy_from);


};


#endif //UNTITLED_PARAMEDIC_HPP
