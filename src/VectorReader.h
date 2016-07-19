#pragma once
#include "VectorGraphic.h"
#include <string>
#include <sstream>

using VG::VectorGraphic;

namespace Xml {

    class VectorReader {
    public:
        VectorReader();
        virtual ~VectorReader();
        void readAndWrite(std::string source, std::string destination);
        VectorGraphic open(std::string source);
        void save(const VectorGraphic vg, std::string destination);
    private:
        void open(std::string & source, std::stringstream & stream);
        void save(std::string & destination, std::stringstream & stream);
        VectorReader(const VectorReader & vr);
    };
}