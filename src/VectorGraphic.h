#pragma once

#include "Point.h"
#include <vector>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <ostream>

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
            //inline std::ostream& operator<<(std::ostream & o){ return o; } // does not compile
            
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
 
    inline std::ostream& operator<<(std::ostream & o, const VectorGraphic & g)
      {
            o << std::boolalpha  << g.isOpen();
            for(int i = 0; i < g.getPointCount(); ++i) {
                o << g.getPoint(i);
            }
            // no privledged acceess to members from free function
           // std::for_each(g.begin(), g.end(), [&o](const Point & p)  { o << p;});    
            return o;
      }
    
}
