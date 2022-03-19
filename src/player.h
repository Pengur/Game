#pragma once

#include <vector>
#include "gameObject.h"
#include "colors.h"

class Player : public GameObject{
public:
    Player() : GameObject(){
        this->x = 2;
        this->y = 2;
        this->sign = 'P';
        this->color = FG_RED;
        this->priority = 3;
    }

//    std::vector<Item*> items;
//    for future updates
    bool isValid(int x, int y, std::vector<GameObject*>* objects);
    void move(char move, std::vector<GameObject*>* objects);
};