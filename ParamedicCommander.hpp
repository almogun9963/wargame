
#ifndef UNTITLED_PARAMEDICCOMMANDER_PP
#define UNTITLED_PARAMEDICCOMMANDER_PP

#include "Soldier.hpp"



class ParamedicCommander : public Soldier {
private:
    int player_id;
public:
    explicit ParamedicCommander(int player_id)
    {
        this->player_id = player_id;
        this->hp = 200;
    }

    ParamedicCommander(ParamedicCommander& to_copy)
    {
        this->player_id = to_copy.player_id;
        this->hp = to_copy.hp;
        this->location = to_copy.location;
    }

    ~ParamedicCommander()
    {
        delete this;
    }

    int hit(std::vector<std::vector<Soldier*>> & board, int rows, int cols);
    Soldier& operator=(Soldier* copy_from);
    void return_max_hp();
    std::pair<int,int> get_loc();
    std::pair<int, int> find_solider(std::vector<std::vector<Soldier*>> board);
    int get_id();



};


#endif //UNTITLED_PARAMEDICCOMMANDER_PP
