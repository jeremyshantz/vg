#pragma once

#include "Layer.h"
#include "PlacedGraphic.h"
#include <vector>
#include <string>
#include <iterator>

using Framework::Layer;
using Framework::PlacedGraphic;
using std::vector;
using std::string;

namespace Framework {

    class Scene {
    public:
        Scene(int width, int height);
        Scene(const Scene& orig);
        void add(const PlacedGraphic & graphic);
        int getWidth() const;
        int getHeight() const;
        void pushBack(Layer layer);
        void remove(Layer layer);
        virtual ~Scene();
        void* begin();
        void* end();
    private:
        int width;
        int height;
        vector<Layer> layers;
        vector<PlacedGraphic> graphics;
    };
}
