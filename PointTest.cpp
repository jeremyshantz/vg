//
//  PointTest.cpp
//  Assignment1
//
//  Created by Chris Elderkin on 4/26/15.
//  Copyright (c) 2015 Chris Elderkin. All rights reserved.
//

#include "src/Point.h"
#include "cppunitlite/TestHarness.h"

using VG::Point;

TEST(equality, Point)
{
    CHECK_EQUAL(Point(1, 2), Point(1, 2));
}

TEST(inequality, Point)
{
    CHECK(Point(1, 2) != Point(3, 4));
}

TEST(constexprPoint, Point)
{
   constexpr int  i = Point{4, 5}.getX();
    
    CHECK_EQUAL(i, 4);
}
