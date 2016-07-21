#pragma once

#include "Element.h"
#include "Scene.h"

namespace Framework {

    class SceneReader {
    public:
        SceneReader();
        SceneReader(const SceneReader&);
        virtual ~SceneReader();
        static Scene & readScene(Xml::Element &);
    private:

    };
    
    class It {
        
        void operator*();
        void operator++();
        void operator==(const It);
        void operator!=(const It);
        void operator=(const It);
        
        
    
    };
}

