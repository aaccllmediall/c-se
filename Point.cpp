#include "Point.h"

template <typename T>
Point::Point(T x, T y)
{
    this->x=x;
    this->y=y;
}
T Point::getX(){
    return x;
}
T Point::getX(){
    return y;
}
void Point::setX(T x2){
    this->x=x2;
}
void Point::setY(T y2){
    this->y=y2;
}

Point::~Point()
{
    //dtor
}

template <typename T>
