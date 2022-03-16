#pragma once
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

    void move(char move);
};