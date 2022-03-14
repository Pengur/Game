#pragma once

#include <iostream>
#include "gameObject.h"
#include "renderer.h"

class Scene{
public:
    std::vector<GameObject*> objects;
    operator std::vector<GameObject*>(){
        return objects;
    }

    void appendObject(GameObject* object);
    void appendobjects(std::vector<GameObject*> objects);
    void appendWalls();
    void initMap();
    ~Scene();
};