#include "scene.h"
#include "perlinNoise.h"
#include "grass.h"
#include "sand.h"
#include "wall.h"

void Scene::appendObject(GameObject *object) {
    objects.push_back(object);
}
void Scene::appendobjects(std::vector<GameObject*> objects) {
    for(auto object : objects){
        this->appendObject(object);
    }
}

void Scene::initMap(){
    for(int y = 0; y < mapHeight; y++){
        for(int x = 0; x < mapWidth; x++){
            if(perlin2d(x, y, 0.5, 2) <= 0.5){
                this->appendObject(new Sand(x, y));
            }
            else{
                this->appendObject(new Grass(x, y));
            }
        }
    }
}

void Scene::appendWalls(){
    for(int y = 0; y < mapHeight; y++){
        for(int x = 0; x < mapWidth; x++){
            if(y == 0 || y == mapHeight - 1){
                this->appendObject(new Wall(x, y));
            }
            else if(x == 0 || x == mapWidth - 1){
                this->appendObject(new Wall(x, y));
            }
        }
    }
}

Scene::~Scene() {
    for(auto object : objects){
        delete object;
    }
}