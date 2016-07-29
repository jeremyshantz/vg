
#include "Layer.h"

namespace Framework {

    Layer::Layer(string alias): alias(alias) {
    }

    Layer::Layer(const Layer& orig)
    :alias(orig.alias), graphics(orig.graphics)
    {
    }

    Layer::~Layer() {
    }

    string Layer::getAlias() const
    {
        return alias;
    }
    
    bool Layer::operator==(const Layer & layer)
    {
        return alias == layer.alias;
    }
    
    vector<PlacedGraphic>::iterator Layer::begin()
    {
        return graphics.begin();
    }
    
    vector<PlacedGraphic>::iterator Layer::end()
    {
        return graphics.end();
    }
}
