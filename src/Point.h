#pragma once

#include<ostream>

namespace VG
{
    class Point {
    public:

        inline constexpr Point() :
        x(0),
        y(0) {}
    
        inline constexpr Point(int xx, int yy) :
            x(xx),
            y(yy) {}
        
        inline Point(const Point& orig):
        x(orig.getX()),
        y(orig.getY()) { }

        inline constexpr int getX() const { return x;}
        inline constexpr int getY() const { return y;}
        
    private:
         int x;
         int y;
         
    public:
        inline void operator=(const Point& point)
        {
            x  =point.getX();
            y = point.getY();
        }
        
        inline bool operator==(const Point& point) const
        {
            return point.getX() == getX() && point.getY() == getY();
        }
        
        inline bool operator!=(const Point& point) const 
        {
            return !operator==(point);
        }
        
         friend std::ostream& operator<<(std::ostream &out, const Point & point);
    };
}