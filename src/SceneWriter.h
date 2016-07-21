#pragma once

#include "Scene.h"

namespace Framework{

    class SceneWriter {
    public:
        SceneWriter();
        SceneWriter(const SceneWriter& orig);
        virtual ~SceneWriter();
        void writeScene(Scene & scene);
    private:

    };
}
