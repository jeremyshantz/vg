 
#include "PlacedGraphic.h"

namespace Framework {

    PlacedGraphic::PlacedGraphic(int x, int y) : x(x), y(y) {
    }

    PlacedGraphic::PlacedGraphic(const PlacedGraphic& orig) {
    }

    PlacedGraphic::~PlacedGraphic() {
    }

    void PlacedGraphic::setGraphic(const HVectorGraphic & hgraphic)
    {
        graphic = hgraphic;
    }
    
    const VectorGraphic &PlacedGraphic::getGraphic() const
    {
        return graphic.get();
    }

    void PlacedGraphic::setPlacementPoint(const Point & point)
    {
        placementPoint = point;
    }
    const Point & PlacedGraphic::getPlacementPoint() const
    {
        return placementPoint;
    }
}
