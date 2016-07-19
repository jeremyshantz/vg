#pragma once

#include "VectorGraphic.h"

using VG::VectorGraphic;

namespace VG {

    class HVectorGraphic {
    public:
        HVectorGraphic(VectorGraphic * vg);
        HVectorGraphic(const HVectorGraphic& orig);
        virtual ~HVectorGraphic();
        const VectorGraphic *  get();
    private:
        VectorGraphic * graphic;
    };
}