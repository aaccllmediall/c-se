#include <iostream>

using namespace std;

template <typename T>
class Point
{
    public:
        Point(const T x, const T y) : x(x), y(y) {}
        T getX() { return x; }
        T getY() { return y; }
        void setX(T x2) { x(x2); }
        void setY(T y2) { y(y2); }

    public:
        T x, y;
};

template <typename T>
Point<T> operator+(const Point<T> o, const Point<T> w)
{
    Point<T> aux={0, 0};
    aux.x=w.x+o.x;
    aux.y=w.y+o.y;
    return aux;
};

template <typename T>
ostream& operator<<(ostream &output, const Point<T> &o)
{
    output << "(" << o.x << ", " << o.y << ")" << endl;
    return output;
};

main()
{
    cout << "Hello world!" << endl;
    Point<int> a(1, 4);
    Point<int> b(3, 7);
    Point<int> c=a+b;
    cout << c << endl;
    cout << a.getX() << endl;
}
