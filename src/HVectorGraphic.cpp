
#include "HVectorGraphic.h"

namespace VG {
    
    HVectorGraphic::HVectorGraphic(){}
    HVectorGraphic::HVectorGraphic(VectorGraphic * v)
    : graphic(v)
    {
    }

    HVectorGraphic::HVectorGraphic(const HVectorGraphic& orig)
    : graphic(orig.graphic)
    {
    }

    HVectorGraphic::~HVectorGraphic() {
    }
    
    const VectorGraphic & HVectorGraphic::get()
    {
          return *graphic.get();
    }
}
