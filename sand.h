#pragma once
#include "gameObject.h"
#include "colors.h"

class Sand : public GameObject{
public:
    Sand(int x, int y) : GameObject(){
        this->x = x;
        this->y = y;
        this->sign = '.';
        this->color = YELLOW_FG;
    }
};