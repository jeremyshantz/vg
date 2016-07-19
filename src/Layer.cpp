
#include "Layer.h"

namespace Framework {

    Layer::Layer(string alias): alias(alias) {
    }

    Layer::Layer(const Layer& orig) {
    }

    Layer::~Layer() {
    }

    string Layer::getAlias() const
    {
        return alias;
    }
}
