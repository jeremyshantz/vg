#pragma once

#include "VectorGraphic.h"
#include "HVectorGraphic.h"
#include "Point.h"
#include <vector>
#include <memory>

using VG::VectorGraphic;
using VG::HVectorGraphic;
using VG::Point;
namespace Framework {
    
    class PlacedGraphic {
    public:
        PlacedGraphic();
        PlacedGraphic(VG::Point, VG::HVectorGraphic&);
        PlacedGraphic(const PlacedGraphic&);
        void setGraphic(const HVectorGraphic &);
        const VectorGraphic & getGraphic();
        void setPlacementPoint(const Point &);
        const Point & getPlacementPoint() const;
        virtual ~PlacedGraphic();
    private:
        Point placementPoint;
        std::shared_ptr<HVectorGraphic> graphic;
    };
}