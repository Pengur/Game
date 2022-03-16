#include "renderer.h"
#include "grass.h"
#include "colors.h"


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

    for(int i = 0; i < cameraHeight + 1; i++){
        for(int j = 0; j < cameraWidth + 1; j++){
            map[j][i] = &empty;
        }
    }

    for(auto object : objects){
        if(object->x > camera->x - (cameraWidth / 2) && object->x < camera->x + (cameraWidth / 2)){
            if(object->y > camera->y - (cameraHeight / 2) && object->y < camera->y + (cameraHeight / 2)){
                std::cout << object->x << std::endl;
                if(object->priority > map[object->x][object->y]->priority) {
                    map[object->x][object->y] = object;
                }
            }
        }
    }

    for(int y = 0; y < cameraHeight; y++){
        for(int x = 0; x < cameraWidth; x++){
//            setColor(map[x][y]->color);
            std::cout << map[x][y]->sign << " ";
        }
        std::cout << "\n";
    }
}