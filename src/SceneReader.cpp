
#include "SceneReader.h"

namespace Framework {

    SceneReader::SceneReader() {
    }

    SceneReader::SceneReader(const SceneReader& orig) {
    }

    SceneReader::~SceneReader() {
    }
    
    Framework::Scene & SceneReader::readScene(Xml::Element & tree)
    {
        if (tree.getName() != "Scene") throw std::runtime_error("Invalid Xml schema");
        
//        Scene scene(tree.getAttribute("width"), tree.getAttribute("height"));
//        return scene;
//        
        
        
    }
}
