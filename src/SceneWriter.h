#pragma once

#include "Scene.h"
#include "HElement.h"

namespace Framework{

    class SceneWriter {
    public:
        SceneWriter();
        SceneWriter(const SceneWriter& orig);
        virtual ~SceneWriter();
        static Xml::HElement writeScene(Scene & scene);
    private:

    };
}
