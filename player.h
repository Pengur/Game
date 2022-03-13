#pragma once
#include "gameObject.h"

class Player : public GameObject{
public:
    Player() : GameObject(){
        this->x = 2;
        this->y = 2;
        this->sign = 'P';
        this->color = 37;
    }

    void move(char move);
};