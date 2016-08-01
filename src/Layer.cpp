
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
    
    void Layer::add(PlacedGraphic & pg)
    {
        graphics.push_back(pg);
    }
    
    bool Layer::operator==(const Layer & layer)
    {
        return alias == layer.alias;
    }
    
    PlacedGraphicIterator Layer::begin()
    {
        return graphics.begin();
    }
    
    PlacedGraphicIterator Layer::end()
    {
        return graphics.end();
    }
}
