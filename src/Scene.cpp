
#include "Scene.h"

namespace VG {

    Scene::Scene(int width, int height): width(width), height(height) {
    }

    Scene::Scene(const Scene& orig) {
    }

    Scene::~Scene() {
    }
    
    void Scene::add(const PlacedGraphic & graphic)
    {
        graphics.push_back(graphic);
    }

    int Scene::getWidth() const
    {
        return width;
    }
    
    int Scene::getHeight() const
    {
        return height;
    }
}
