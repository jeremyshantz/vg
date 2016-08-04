#pragma once

#include "Scene.h"
#include "HElement.h"

namespace Framework{

    class SceneWriter {
    public:
        static Xml::HElement writeScene(Scene & scene);
    };
}
