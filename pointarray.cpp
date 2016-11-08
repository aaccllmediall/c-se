#include <iostream>

using namespace std;

class Point
{
    public:
        Point(const int x, const int y) : x(x), y(y) {}
        int getX() { return x; }
        int getY() { return y; }
        void setX(int x2) { this->x=x2; }
        void setY(int y2) { this->y=y2; }

    public:
        int x, y;
};

class PointArray : public Point
{
        int size;
        Point *pts;
        void resize(int size) {
            PointArray* copy=new Point[size];
            int menor;
            if (this->size<size)
                menor=this->size;
            else
                menor=size;
            for (int i=0; i<menor; i++)
                copy[i]=this->pts[i];
            delete[] this->pts;
            this->pts=copy;
            this->size=size;
        }

    public:
        PointArray() {
            this->size=0;
            this->pts=new Point[size];
        }
        PointArray(const Point pts[], const int size) {
            this->size=size;
            this->pts=new Point[size];
        }
        PointArray(const PointArray &pv) {
            this->size=pv.size;
            this->pts=new Point[pv.size];
            for (int i=0; i<pv.size; i++)
                this->pts[i]=pv.pts[i];
        }
        ~PointArray() { delete[] pts; }
        void clear() {
            for (int i=0; i<size; i++)
                pts[i]=0;
        }
        int getSize() const { return size; }
        void push_back(const Point &p) {
            resize(this->size+1);
            this->pts[this->size]=p;
        }
        void insert(const int pos; const Point &p) {}
        void remove(const int pos) {
            if (pos>=0 && pos<size){
                for (int i=pos; i<size-1; i++)
                    *(pts+i)=*(pts+i+1);
                this->resize(size-1);
            }
        }

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
