#pragma once

#include "PlacedGraphic.h"
#include <vector>
#include <string>

using std::string;
using std::vector;

namespace Framework {

    using PlacedGraphicIterator = std::vector<PlacedGraphic>::iterator;
    
    class Layer {
    public:
        Layer(string alias);
        Layer(const Layer& orig);
        virtual ~Layer();
        string getAlias() const;
        void add(PlacedGraphic &);
        bool operator==(const Layer &);
        PlacedGraphicIterator begin();
        PlacedGraphicIterator end();
    private:
        string alias;
        vector<PlacedGraphic> graphics;
    };
}
