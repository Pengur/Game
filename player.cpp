#include "player.h"

void Player::move(char move){
    switch (move) {
        case 'd': this->x += 1; break;
        case 'a': this->x -= 1; break;
        case 's': this->y += 1; break;
        case 'w': this->y -= 1; break;
    }
}