#ifndef POINT_H
#define POINT_H

template <typename T>
class Point
{
    public:
        Point(T , T );
        T getX();
        T getY();
        void setX(T );
        void setY(T );
        
        virtual ~Point();

    private:
        T x, y;
};

template <typename U>
class

#endif // POINT_H
