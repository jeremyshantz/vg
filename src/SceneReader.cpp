
#include "SceneReader.h"
#include "Layer.h"
#include "PlacedGraphic.h"
#include "Element.h"
#include "HElement.h"
#include "ElementList.h"
#include <algorithm>

namespace Framework {

    Framework::Scene & SceneReader::readScene(Xml::Element & tree)
    {  
        if (tree.getName() != "Scene") throw std::runtime_error("Invalid Xml schema");
        
        Scene * scene = new Scene(tree.getAttributeInt("width"), tree.getAttributeInt("height"));
        
        // Layers
        std::for_each(tree.begin(), tree.end(), [&scene](const Xml::HElement eLayer){
            
            Layer layer(eLayer->getAttribute("alias"));
            
            // PlacedGraphics
            std::for_each(eLayer->begin(), eLayer->end(), [&layer](const Xml::HElement ePG){
            
                PlacedGraphic pg;
                pg.setPlacementPoint(VG::Point(ePG->getAttributeInt("x"), ePG->getAttributeInt("y")));
                
                // VectorGraphic
                VectorGraphic * vg = new VectorGraphic();
                Xml::HElement eVectorGraphic = *ePG->getChildElements().begin();
                if (!eVectorGraphic->getAttributeBool("closed")) {
                    vg->openShape();
                }
                
                // Points
                std::for_each(eVectorGraphic->begin(), eVectorGraphic->end(), [&vg](const Xml::HElement e){
                    vg->addPoint(VG::Point(e->getAttributeInt("x"), e->getAttributeInt("y")));
                });
                
                VG::HVectorGraphic hvg(vg);
                pg.setGraphic(hvg);
                
               layer.add(pg);
            
            });
            scene->pushBack(layer);
        });
        
        return *scene;
    }
}
