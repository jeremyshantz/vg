#include "AttributeMap.h"

namespace Xml {
        AttributeMap::AttributeMap(){}
        AttributeMap::AttributeMap(const AttributeMap& orig): map(orig.map){}
        AttributeMap::~AttributeMap(){}
        int AttributeMap::size(){ return map.size(); }
        bool AttributeMap::empty(){ return map.empty(); }
        void AttributeMap::add(std::string attr, std::string val){
                map.insert(std::pair<std::string, std::string>(attr, val));
        }
        bool AttributeMap::contains(const std::string attr){
            return map.find(attr) != map.end();
        }
        std::map<std::string, std::string>::iterator AttributeMap::begin(){ return map.begin();}
        std::map<std::string, std::string>::iterator AttributeMap::end(){ return map.end(); }
        const std::string AttributeMap::operator[](const std::string attr){ return map[attr];}
}