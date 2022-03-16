#pragma once

#include <iostream>
#include <vector>
#include "gameObject.h"
#include <vector>

#define mapWidth 200
#define mapHeight 200
#define cameraHeight 20
#define cameraWidth 20


class Renderer {
public:
    std::vector<GameObject*> objects;
    void draw(GameObject* object);
    void draw(std::vector<GameObject*> objects);
    void flush(GameObject* camera);
};