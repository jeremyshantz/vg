#pragma once

#include "Element.h"
#include <memory>

namespace Xml {

    using HElement = std::shared_ptr<Xml::Element>;

    inline HElement make_HElement(const std::string& name)
    {
        return std::make_shared<Element>();
    }
  
}