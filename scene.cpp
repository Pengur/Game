#include "scene.h"

void Scene::appendObject(GameObject *object) {
    objects.push_back(object);
}
void Scene::appendobjects(std::vector<GameObject*> objects) {
    for(auto object : objects){
        this->appendObject(object);
    }
}

void Scene::appendWalls(){
    for(int i = 0; i < mapHeight; i++){
        for(int j = 0; j < mapWidth; j++){
            if(i == 0 || i == mapHeight - 1){
                this->appendObject(new GameObject{j, i, 'X', 31});
            }
            else if(j == 0 || j == mapWidth - 1){
                this->appendObject(new GameObject{j, i, 'X', 31});
            }
        }
    }
}

Scene::~Scene() {
    for(auto object : objects){
        delete object;
    }
}