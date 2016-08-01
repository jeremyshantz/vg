#pragma once

#include "Layer.h"
#include "PlacedGraphic.h"
#include <vector>
#include <string>
#include <iterator>

using Framework::Layer;

namespace Framework {

    class Scene {
    public:
        Scene(int width, int height);
        Scene(const Scene& orig);
        int getWidth() const;
        int getHeight() const;
        void pushBack(Layer layer);
        void remove(Layer layer);
        virtual ~Scene();
        std::vector<Layer>::iterator begin();
        std::vector<Layer>::iterator end();
        int count();
    private:
        vector<Layer> layers;
        int width;
        int height;
    };
}
