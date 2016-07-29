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
        bool operator==(const Layer &);
        vector<PlacedGraphic>::iterator begin();
        vector<PlacedGraphic>::iterator end();
    private:
        string alias;
        vector<PlacedGraphic> graphics;
    };
}
