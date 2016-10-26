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

    protected:
        PointArray p;
        static int x;
}

#endif // GEOMETRY_H
