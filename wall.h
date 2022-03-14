#pragma once
#include "gameObject.h"
#include "colors.h"

class Wall : public GameObject{
public:
    Wall(int x, int y) : GameObject(){
        this->x = x;
        this->y = y;
        this->sign = 'X';
        this->color = BRIGHT_BLACK_FG;
    }
};