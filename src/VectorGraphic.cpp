
#include "VectorGraphic.h"
#include <algorithm>
#include<iostream>

namespace VG
{
    int getDifference(const std::set<int> &  set)
    {  ;
         int min = *set.begin();
         int max = *++set.end();
        
        //  std::for_each(set.begin(), set.end(), [](const int &n){ std::cout << n << ",";  });
    
         return max - min;
    }
    
    VectorGraphic::VectorGraphic() : 
            open(false) {  }

    VectorGraphic::VectorGraphic(const VectorGraphic& orig) 
    {
        open = orig.open;
        for (int i = 0; i < orig.getPointCount(); i++)
        {
            addPoint(orig.getPoint(i));
        }
    }

    VectorGraphic::~VectorGraphic() { }

    int VectorGraphic::getPointCount() const
    {
        return points.size();
    }

    bool VectorGraphic::isOpen() const
    {
        return open;
    }

    bool VectorGraphic::isClosed() const
    {
        return !open;
    }

    void VectorGraphic::addPoint(const Point point)
    {
        points.push_back(point);
        x.insert(point.getX());
        y.insert(point.getY());
    }
    
    void VectorGraphic::removePoint(const Point point)
    { 
        auto index = std::find(points.begin(), points.end(), point);
        
        if (index == std::end(points))
        {
             throw std::out_of_range("");
        }
        
        erasePoint(index - points.begin());
    }
    
    const Point & VectorGraphic::getPoint(int id) const
    {
        if (id > points.size())
        {
            throw std::out_of_range("");
        }
        
        if (id < getPointCount()) {
            return points[id];
        }
    }
    
    void VectorGraphic::erasePoint(int id)
    {  
        if (id > points.size())
        {
            throw std::out_of_range("");
        }
        
        auto index = points.begin() + id ;
        Point point = *index;
        
        x.erase(point.getX());
        y.erase(point.getY());
        
        points.erase(index);
    }
    
    void VectorGraphic::closeShape()
    {
        open = false;
    }
    
    void VectorGraphic::openShape()
    {
        open = true;
    }
    
    int VectorGraphic::getWidth()  const
    {
        return (getDifference(x));
    }
    
    int VectorGraphic::getHeight()  const
    {
         return (getDifference(y));
    }    
}
