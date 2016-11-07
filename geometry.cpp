#include "geometry.h"

Point::Point(int x=0, int y=0)
{
    this->x=x;
    this->y=y;
}

int Point::getX() const {
    return x;
}
int Point::getY() const {
    return y;
}
void Point::setX(const int new_x){
    this->x=new_x;
}
void Point::setY(const int new_y){
    this->y=new_y;
}

Point::~Point()
{
    //dtor
}


PointArray::PointArray(Point points, int size=0)
{
    this->size=0;
    this->points=new Point[size];
}

PointArray::PointArray(const Point points[], const int new_size){
    this->size=new_size;
    this->points=new Point[new_size];
    for (int i=0; i<new_size; i++){
        this->points[i]=points[i];
    }
}
PointArray::PointArray(const PointArray& pv){
    this->size=pv.size;
    this->points=new Point[pv.size];
    for (int i=0; i<pv.size; i++){
        this->points[i]=pv.points[i];
    }
}
void PointArray::push_back(const Point &p){
    this->points=p[size+1];
}
void PointArray::insert(const int position, const Point &p){
    this->points=p[size+1];
    int j=0;
    for (int i=0; i<size; i++){
        if (i==position-1)
            j++;
        p[j]=p[i];
        j++;
    }
    p[position-1]=0;
}
void PointArray::remove(const int pos){
    int j=0;
    for (int i=0; i<size; i++){
        if (i==pos-1)
            j--;
        points[j]=points[i];
    }
    points[size-1]=0;
}
const int PointArray::getSize() const {
    return size;
}
void PointArray::clear(){
    delete[] points;
    new Point[0];
}

PointArray::~PointArray(){
    delete[] points;
}
