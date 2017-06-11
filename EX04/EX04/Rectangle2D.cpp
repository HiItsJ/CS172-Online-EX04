//
//  Rectangle2D.cpp
//  EX04
//
//  Created by Josiah on 6/11/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include "Rectangle2D.hpp"

Rectangle2D::Rectangle2D(){
    x = 0;
    y = 0;
    width = 1;
    height = 1;
    initializeBounds();
}
Rectangle2D::Rectangle2D(double x, double y, double w, double h){
    this->x = x;
    this->y = y;
    width = w;
    height = h;
    initializeBounds();
}
void Rectangle2D::initializeBounds(){
    boundLeft = x-(width/2);
    boundRight = x+(width/2);
    boundUpper = y+(height/2);
    boundLower = y-(height/2);
}
const double Rectangle2D::getX(){return x;}
const double Rectangle2D::getY(){return y;}
const double Rectangle2D::getWidth(){return width;}
const double Rectangle2D::getHeight(){return height;}
const double Rectangle2D::getBoundLeft(){return boundLeft;}
const double Rectangle2D::getBoundRight(){return boundRight;}
const double Rectangle2D::getBoundUpper(){return boundUpper;}
const double Rectangle2D::getBoundLower(){return boundLower;}
const void Rectangle2D::setX(double x){this->x = x;}
const void Rectangle2D::setY(double y){this->y = y;}
const void Rectangle2D::setWidth(double w){width = w;}
const void Rectangle2D::setHeight(double h){height = h;}
const double Rectangle2D::getArea(){
    return width*height;
}
const double Rectangle2D::getPerimeter(){
    return 2*width+2*height;
}
const bool Rectangle2D::contains(double x, double y){
    if (x>this->getBoundLeft() && x<this->getBoundRight() && y>this->getBoundLower() && y<this->getBoundUpper()){
        return true;
    }
    return false;
}
const bool Rectangle2D::contains(const Rectangle2D &r){
    if (r.boundLeft>this->getBoundLeft() && r.boundRight<this->getBoundRight() && r.boundUpper<this->getBoundUpper() && r.boundLower>this->getBoundLower()){
        return true;
    }
    return false;
}
const bool Rectangle2D::overlaps(const Rectangle2D &r){
    bool inside = false;
    bool outside = false;
    for(int x=r.boundLeft; x<r.boundRight; x++){
        for (int y=r.boundLower; y<r.boundUpper; y++){
            if (this->contains(x, y)){
                inside = true;
            }
            else {
                outside = true;
            }
        }
    }
    if (inside && outside){
        return true;
    }
    return false;
}
