#include <iostream>
#include <termio.h>
#include <unistd.h>
#include "scene.h"
#include "renderer.h"
#include "player.h"

//https://stackoverflow.com/questions/9547868/is-there-a-way-to-get-user-input-without-pressing-the-enter-key
struct termios old_tio, new_tio;
void disableEnter(){
    tcgetattr(STDIN_FILENO,&old_tio);
    new_tio=old_tio;
    new_tio.c_lflag &=(~ICANON & ~ECHO);
    tcsetattr(STDIN_FILENO,TCSANOW,&new_tio);
}

void enableEnter(){
    tcsetattr(STDIN_FILENO,TCSANOW,&old_tio);
}


int main() {
    disableEnter();
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
//        usleep(500);
        move = getchar();
        while(getchar()){}
        player->move(move);
        renderer.clear();
    }
    enableEnter();
    return 0;
}
