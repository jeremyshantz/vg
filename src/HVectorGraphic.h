#pragma once
#include "VectorGraphic.h"

namespace VG { 

class HVectorGraphic {
public:
    HVectorGraphic();
    HVectorGraphic(VectorGraphic *);
    HVectorGraphic(const HVectorGraphic& orig);
    virtual ~HVectorGraphic();
    VectorGraphic & get();
private:

};

}