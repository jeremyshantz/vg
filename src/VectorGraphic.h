#pragma once

#include "Point.h"
#include <vector>
#include <set>
#include <iostream>
#include <memory>
#include <string>

namespace VG 
{
    using Points = std::vector<Point>;

    class VectorGraphic 
    {
        public:
            VectorGraphic();
            VectorGraphic(const VectorGraphic& orig);
            virtual ~VectorGraphic();
            int getPointCount() const;
            bool isOpen() const;
            bool isClosed() const;
            void addPoint(const Point point);
            void removePoint(const Point point);
            const Point & getPoint(const int id) const;
            void erasePoint(int id);
            void closeShape();
            void openShape();
            int getWidth()  const;
            int getHeight()  const;
       private:
            bool open;
            Points points;
            std::set<int> x;
            std::set<int> y;
   
    public:
        
        inline bool operator!=(const VectorGraphic& vg)
        {
            return !operator==(vg);
        }
        
         inline  bool operator==(const VectorGraphic& vg) const
        {
             if (getPointCount() != vg.getPointCount())
             {
                 return false;
             }

             if (isOpen() != vg.isOpen()) {
                 return false;
             }
             
             return points == vg.points;
        }
    };
     
}
