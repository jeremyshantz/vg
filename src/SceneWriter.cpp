#include "HElement.h"
#include "Layer.h"
#include "PlacedGraphic.h"
#include "Point.h"
#include "HVectorGraphic.h"
#include "SceneWriter.h"
#include "ElementList.h"
#include <string>
#include <algorithm>

using Xml::HElement;
using Framework::Layer;

namespace Framework {
    
    SceneWriter::SceneWriter() {}
    SceneWriter::SceneWriter(const SceneWriter& orig) {}
    SceneWriter::~SceneWriter() {}
    
    HElement writePoint(Point point) {
        HElement e = Xml::make_HElement("Point");
        e->addAttribute("x", std::to_string(point.getX()));
        e->addAttribute("y", std::to_string(point.getY()));
        return e;
    }
    
    HElement  writePlacedGraphic(PlacedGraphic & model) {
        HElement e = Xml::make_HElement("PlacedGraphic");
        e->addAttribute("x", std::to_string(model.getPlacementPoint().getX()));
        e->addAttribute("y", std::to_string(model.getPlacementPoint().getY()));
        
        VectorGraphic vg = model.getGraphic();
        HElement hvg = Xml::make_HElement("VectorGraphic");
        hvg->addAttribute("closed", vg.isClosed() ? "true" : "false");
        
        std::for_each(vg.begin() , vg.end(), [&hvg](Point point){
            hvg->getChildElements().add(writePoint(point));
        });
        
        e->getChildElements().add(hvg);
        
        return e;
    }
    
    HElement writeLayer(Layer & model) {
        
        HElement e = Xml::make_HElement("Layer");
        e->addAttribute("alias", model.getAlias());
        
        std::for_each(model.begin(), model.end(), [&e](PlacedGraphic & pg){
            e->getChildElements().add(writePlacedGraphic(pg));
        });
        
        return e;
    }
    
    Xml::HElement SceneWriter::writeScene(Scene & scene)
    {
        HElement root = Xml::make_HElement("Scene");
        root->addAttribute("height", std::to_string(scene.getHeight()));
        root->addAttribute("width", std::to_string(scene.getWidth()));
        
        std::for_each(scene.begin(), scene.end(), [&root](Layer & layer){
            root->getChildElements().add(writeLayer(layer));
        });
        
       
        return root;
    }
}
