#pragma once

#include "Element.h"
#include "Scene.h"

namespace Framework {

    class SceneReader {
    public:
        static Scene & readScene(Xml::Element &);
    };
}

