#pragma once

#include "Element.h"
#include <memory>
#include <vector>
namespace Xml {

    using HElement = std::shared_ptr<Xml::Element>;
    
    inline HElement make_HElement(const std::string& name)
    {
        return std::make_shared<Element>(Element(name));
    }
  
}