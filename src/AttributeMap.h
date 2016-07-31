#pragma once
#include<string>
#include <map>
namespace Xml {

    using AttributeMap = std::map<std::string, std::string>;
    
//    class AttributeMap {
//    public:
//        AttributeMap();
//        AttributeMap(const AttributeMap&);
//        virtual ~AttributeMap();
//        int size();
//        bool empty();
//        void add(std::string, std::string);
//        bool contains(const std::string);
//        std::map<std::string, std::string>::iterator begin();
//        std::map<std::string, std::string>::iterator end();
//        const std::string operator[](const std::string);
//    private:
//        std::map<std::string, std::string> map;
//    };
}