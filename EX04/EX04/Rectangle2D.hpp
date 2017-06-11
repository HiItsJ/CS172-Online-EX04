//
//  Rectangle2D.hpp
//  EX04
//
//  Created by Josiah on 6/11/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef Rectangle2D_hpp
#define Rectangle2D_hpp

#include <stdio.h>

class Rectangle2D{
    double x, y, width, height;
    double boundLeft, boundRight, boundUpper, boundLower;
public:
    Rectangle2D();
    Rectangle2D(double x, double y, double w, double h);
    void initializeBounds();
    const double getX();
    const double getY();
    const double getWidth();
    const double getHeight();
    const double getBoundLeft();
    const double getBoundRight();
    const double getBoundUpper();
    const double getBoundLower();
    const void setX(double x);
    const void setY(double y);
    const void setWidth(double w);
    const void setHeight(double h);
    const double getArea();
    const double getPerimeter();
    const bool contains(double x, double y);
    const bool contains(const Rectangle2D &r);
    const bool overlaps(const Rectangle2D &r);
};

#endif /* Rectangle2D_hpp */
