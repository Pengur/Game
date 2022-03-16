#pragma once
#include "gameObject.h"
#include "colors.h"

class Wall : public GameObject{
public:
    Wall(int x, int y) : GameObject(){
        this->x = x;
        this->y = y;
        this->sign = 'X';
        this->color = FG_BLACK;
        this->priority = 5;
    }
};