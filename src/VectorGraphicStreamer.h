/*
Copyright (C) 2016. Sundeep Bhatia. All Rights Reserved.

Project - Assignment1
File - VectorGraphicStreamer.h
Created - 7/17/2016 - Sundeep Bhatia
*/
#pragma once
// C++ Std Lib
#include <iosfwd>                       // std::istream, std::ostream
// Project
#include "VectorGraphic.h"              // VG:VectorGraphic
#include  <stdexcept>
namespace VG {
    class VectorGraphicStreamer {
    public:
        static void toXml(const VectorGraphic& vg, std::ostream& out);
        static VectorGraphic fromXml(std::istream& in);
    };
} // namespace VG
