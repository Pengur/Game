#pragma once

#include "gameObject.h"
#include "colors.h"

class Tree : public GameObject{
public:
    Tree(int x, int y) : GameObject(){
        this->x = x;
        this->y = y;
        this->sign = 'Y';
        this->color = FG_WHITE;
        this->priority = 4;
    }
};