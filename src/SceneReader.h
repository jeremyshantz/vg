#pragma once

#include "Element.h"
#include "Scene.h"

namespace Framework {

    class SceneReader {
    public:
        SceneReader();
        SceneReader(const SceneReader&);
        virtual ~SceneReader();
        static VG::Scene & readScene(Xml::Element &);
    private:

    };
}

