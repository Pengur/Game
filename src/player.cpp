#include "player.h"
#include "scene.h"

bool Player::isValid(int x, int y, std::vector<GameObject*>* objects){
    for(auto object : *objects){
        if(object->x == x && object->y == y){
            if(object->priority > this->priority){
                return false;
            }
        }
    }
    return true;
}

void Player::move(char move, std::vector<GameObject*>* objects){
    switch (move){
        case 'd':
            if(isValid(this->x + 1, this->y, objects)){
                this->x += 1;
            }; break;
        case 'a':
            if(isValid(this->x - 1, this->y, objects)){
                this->x -= 1;
            }; break;
        case 's':
            if(isValid(this->x, this->y + 1, objects)){
                this->y += 1;
            }; break;
        case 'w':
            if(isValid(this->x, this->y - 1, objects)){
                this->y -= 1;
            }; break;
    }
}