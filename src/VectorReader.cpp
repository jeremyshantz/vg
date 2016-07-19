
#include "VectorReader.h"
#include "VectorGraphicStreamer.h"
#include <iostream>
#include <fstream>
#include <istream>

using Xml::xml::VectorGraphicStreamer;

namespace Xml {

        VectorReader::VectorReader() { }
        VectorReader::~VectorReader() { }

        void VectorReader::readAndWrite(std::string source, std::string destination)
        {  
            std::stringstream originalXml;
            open(source, originalXml);

            auto vg = VectorGraphicStreamer::fromXml(originalXml);

            std::stringstream newXml;
            VectorGraphicStreamer::toXml(vg, newXml);
            save(destination, newXml);
        }
        
        VectorGraphic VectorReader::open(std::string source)
        {
            std::stringstream stream;
            open(source, stream);
            return VectorGraphicStreamer::fromXml(stream);
        }
        
        void VectorReader::save(const VectorGraphic vg, std::string destination)
        {
            std::stringstream stream;
            VectorGraphicStreamer::toXml(vg, stream);
            save(destination, stream);
        }

        void  VectorReader::open(std::string & source, std::stringstream & stream)
        {
            std::ifstream file(source);

            if (!file)
            {
                throw std::exception();
            }

            stream << file.rdbuf();
            file.close();
        }

        void VectorReader::save(std::string & destination, std::stringstream & stream)
        {
            std::ofstream file(destination);

            if (!file)
            {
                throw std::exception();
            }

            file << stream.rdbuf();
            file.close();
        }
}