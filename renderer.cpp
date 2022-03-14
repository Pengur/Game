#include "renderer.h"
#include "grass.h"

void Renderer::draw(GameObject* object){
    objects.push_back(object);
}
void Renderer::draw(std::vector<GameObject*> objects){
    for(auto object : objects){
        this->objects.push_back(object);
    }
}

void Renderer::flush(){
    char map[mapWidth][mapHeight];


    for(int i = 0; i < mapHeight; i++){
        for(int j = 0; j < mapWidth; j++){
            map[j][i] = ' ';
        }
    }

    for(auto object : objects){
        map[object->x][object->y] = object->sign;
    }

    for(int i = 0; i < mapHeight; i++){
        for(int j = 0; j < mapWidth; j++){
            std::cout << map[j][i] << " ";
        }
        std::cout << "\n";
    }
}