#include "renderer.h"
#include "grass.h"
#include "colors.h"

void Renderer::clear(){
    std::cout << "\x1B[2J\x1B[H";
}


void Renderer::draw(GameObject* object){
    objects.push_back(object);
}
void Renderer::draw(std::vector<GameObject*> objects){
    for(auto object : objects){
        this->objects.push_back(object);
    }
}

void Renderer::flush(GameObject* camera){
    GameObject* map[cameraWidth + 1][cameraHeight + 1];
    GameObject empty;
    empty.sign = ' ';
    empty.x = 0;
    empty.y = 0;
    empty.priority = 0;

    int cameraX = camera->x - (cameraWidth / 2);
    int cameraY = camera->y - (cameraHeight / 2);

    for(int i = 0; i < cameraHeight + 1; i++){
        for(int j = 0; j < cameraWidth + 1; j++){
            map[j][i] = &empty;
        }
    }

    for(auto object : objects){
        if(object->x < cameraX || object->x >= cameraX + cameraWidth) continue;
        if(object->y < cameraY || object->y >= cameraY + cameraHeight) continue;
        if(object->priority > map[object->x - cameraX][object->y - cameraY]->priority) {
            map[object->x - cameraX][object->y - cameraY] = object;
        }
    }

    for(int y = 0; y < cameraHeight; y++){
        for(int x = 0; x < cameraWidth; x++){
            setColor(map[x][y]->color | RESET);
            std::cout << map[x][y]->sign << " ";
            setColor(RESET);
        }
            std::cout << "\n";
    }
}