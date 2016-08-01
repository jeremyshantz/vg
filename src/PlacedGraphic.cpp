 
#include "PlacedGraphic.h"

namespace Framework {

    PlacedGraphic::PlacedGraphic() : graphic()
    {
    }
    
    PlacedGraphic::PlacedGraphic(VG::Point point, VG::HVectorGraphic& graphic)
    : placementPoint(point),  graphic(std::make_shared<VG::HVectorGraphic>(graphic))
    {
    }

    PlacedGraphic::PlacedGraphic(const PlacedGraphic& pg)
    :placementPoint(pg.placementPoint), graphic(pg.graphic)
    {  
    }
    
    PlacedGraphic::~PlacedGraphic() { }

    void PlacedGraphic::setGraphic(const HVectorGraphic &   hgraphic)
    {
        graphic =std::make_shared<VG::HVectorGraphic>(hgraphic);
    }

    const VectorGraphic & PlacedGraphic::getGraphic()
    {
        return graphic->get();
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
