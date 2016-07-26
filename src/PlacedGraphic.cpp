 
#include "PlacedGraphic.h"

namespace Framework {

    PlacedGraphic::PlacedGraphic() {
    }
    
    PlacedGraphic::PlacedGraphic(VG::Point, VG::HVectorGraphic&)
    {

    }
    
    PlacedGraphic::PlacedGraphic(const PlacedGraphic & orig) {
    }

    PlacedGraphic::~PlacedGraphic() {
    }

    void PlacedGraphic::setGraphic(const HVectorGraphic & hgraphic)
    {
        graphic = hgraphic;
    }

    const VectorGraphic * PlacedGraphic::getGraphic()
    {
        
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
