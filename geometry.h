#ifndef GEOMETRY_H
#define GEOMETRY_H


class Point
{
    public:
        Point(int , int );
        int getX() const;
        int getY() const;
        void setX(const int new_x);
        void setY(const int new_y);
        virtual ~Point();

    private:
        int x, y;
};

class PointArray
{
    public:
        PointArray(Point , int );
        PointArray(const Point points[], const int new_size);
        PointArray(const PointArray &pv);
        void resize(int );
        virtual ~PointArray();
        void push_back(const Point & );
        void insert(const int , const Point & );
        void remove(const int );
        const int getSize() const;
        void clear();

    private:
        int size;
        Point *points;
};

class Polygon
{
    public:
        Polygon(PointArray , static int );
        int getNumPolygons(static int );
        int getNumSides(int );
        Point getPoints(int ,int );
        double area();

    protected:
        PointArray p;
        static int x;
}
class Rectangle : public Polygon
{
    public:
        Rectangle(Point ,Point );
        double area();
        
    protected:
        Point x;
        Point y;
};
class Triangle : public Polygon
{
    public:
        Triangle(Point , Point , Point );
        double area();
        
        
    protected:
        Point x;
        Point y;
        Point z;
};

#endif // GEOMETRY_H
