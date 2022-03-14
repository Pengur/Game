#pragma once
#include "gameObject.h"
#include "colors.h"

class Grass : public GameObject{
public:
    Grass(int x, int y) : GameObject(){
        this->x = x;
        this->y = y;
        this->sign = '#';
        this->color = GREEN_FG;
    }
};