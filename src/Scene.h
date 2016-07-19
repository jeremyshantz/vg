#pragma once

#include "PlacedGraphic.h"
#include <vector>
#include <string>
#include <iterator>

using Framework::PlacedGraphic;
using std::vector;
using std::string;

namespace VG {

    class Scene {
    public:
        Scene(int width, int height);
        Scene(const Scene& orig);
        void add(const PlacedGraphic & graphic);
        int getWidth() const;
        int getHeight() const;
        virtual ~Scene();
        void* begin();
        void* end();
    private:
        int width;
        int height;
        vector<PlacedGraphic> graphics;
    };
}
