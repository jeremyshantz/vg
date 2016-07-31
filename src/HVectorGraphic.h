#pragma once
#include "VectorGraphic.h"
#include <memory>

namespace VG { 

class HVectorGraphic {
public:
    HVectorGraphic();
    HVectorGraphic(VectorGraphic *);
    HVectorGraphic(const HVectorGraphic& orig);
    virtual ~HVectorGraphic();
    const VectorGraphic & get();
private:
    std::shared_ptr<VectorGraphic> graphic;
};

}