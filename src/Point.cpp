
#include "Point.h"

namespace VG
{
        std::ostream& operator<<(std::ostream &out, const Point & point)
        {
             out << "{" << point.getX() <<  ", "  << point.getY() << "}";
             return out;
        }
}