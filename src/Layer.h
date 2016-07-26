#pragma once

#include "PlacedGraphic.h"
#include <vector>
#include <string>

using std::string;
using std::vector;

namespace Framework {

    class Layer {
    public:
        Layer(string alias);
        Layer(const Layer& orig);
        virtual ~Layer();
        string getAlias() const;
    private:
        string alias;
        vector<PlacedGraphic> graphics;
    };
}
