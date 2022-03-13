#pragma once
#include "gameObject.h"

class Grass : public GameObject{
public:
    Grass() : GameObject(){
        this->sign = '.';
        this->color = 32;
    }
};