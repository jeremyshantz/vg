#include "HElement.h"
#include "XmlReader.h"
#include "ElementList.h"
#include <memory>
#include <stdexcept>

namespace Xml {
    
    HElement Reader::loadXml(std::istream & in)
    {
        Reader r(in);
        return r.load();
    }
    
    void Reader::addAttributesAndChildren(HElement & node) {

        incr();
        log(node->getName());
        std::string name, attr, value;
        std::string exitName = std::string('/' + node->getName());
        
        while(reader.getAttribute(attr, value)) {
             node->addAttribute(attr, value);
        }
        
        if (reader.atAndOfSelfClosingTag())
        {
            log("self-closing");
            reader.skipEndElement();
            dec();
            return;
        }
       
        reader.skipEndElement();
        
        while(reader.getElement(name)) {
            
            log("new name " +name);
            if (name[0] == '/') {
                log("found slash continuing");
                continue;
            }
            
            HElement e = make_HElement(name);
            addAttributesAndChildren(e);
            log("Adding " + e->getName() + " to " + node->getName());
            node->getChildElements().add(e);
        }
        
        dec();
    }
    
    HElement Reader::load()
    {
        std::string name;
        if (!reader.getElement(name)) {
            throw std::runtime_error("Invalid Xml");
        }
        
        HElement root = make_HElement(name);
        addAttributesAndChildren(root);
        
        return root;
    }
}
