#include <iostream>
#include "scene.h"
#include "renderer.h"
#include "player.h"

int main() {
    Scene scene;
    Renderer renderer;
    Player *player = new Player();
    scene.appendObject(player);

    char move;
    scene.initMap();
    scene.appendWalls();
    while(move != 'x'){
        renderer.draw(scene);
        renderer.flush(player);
        std::cin >> move;
        player->move(move);
    }

    return 0;
}
