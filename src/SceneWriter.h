#pragma once

#include "Scene.h"
#include "Element.h"
#include <memory>

namespace Framework{

    class SceneWriter {
    public:
        SceneWriter();
        SceneWriter(const SceneWriter& orig);
        virtual ~SceneWriter();
        static std::unique_ptr<Xml::HElement>writeScene(Scene & scene);
    private:

    };
}
