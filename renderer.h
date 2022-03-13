#pragma once

#include <iostream>
#include <vector>
#include "gameObject.h"
#include <vector>

#define mapWidth 20
#define mapHeight 20

class Renderer {
public:
    std::vector<GameObject*> objects;
    void draw(GameObject* object);
    void draw(std::vector<GameObject*> objects);
    void flush();
};