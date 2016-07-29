
#include <algorithm>

#include "Scene.h"

namespace Framework {

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
    
    void Scene::pushBack(Layer layer)
    {
        layers.push_back(layer);
    }
    
    void Scene::remove(Layer layer)
    {
        auto position = std::find(layers.begin(), layers.end(), layer);
        
        if (position != layers.end()) {
            layers.erase(position);
        }
    }
    
    std::vector<Layer>::iterator Scene::begin()
    {
        return layers.begin();
    }
    
    std::vector<Layer>::iterator Scene::end()
    {
        return layers.end();
    }
    
}
