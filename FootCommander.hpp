#ifndef UNTITLED_FOOTCOMMANDER_HPP
#define UNTITLED_FOOTCOMMANDER_HPP

#include "Soldier.hpp"



class FootCommander : public Soldier
{
private:
    int player_id;
public:

    explicit FootCommander(int player_id){
        this->player_id = player_id;
        this->hp = 150;
    }

    FootCommander(FootCommander& to_copy){
        this->player_id = to_copy.player_id;
        this->hp = to_copy.hp;
        this->location = to_copy.location;
    }

    ~FootCommander(){
        delete this;
    }

    int hit(std::vector<std::vector<Soldier*>> & board, int rows, int cols);
    std::pair<int, int> find_solider(std::vector<std::vector<Soldier*>> board);
    std::pair<int,int> get_loc();
    int get_id();
    Soldier& operator=(Soldier* copy_from);
    void return_max_hp();
};


#endif //UNTITLED_FOOTCOMMANDER_HPP