#ifndef RECTANGLE_H
#define RECTANGLE_H
template<class T>
class Rectangle {
    public:
        // constructors
        Rectangle();
        Rectangle(T w);
        Rectangle(T w, T l);
        
        //mutators and accessors
        T getLength();
        T getWidth();
        void setWidth(T w);
        void setLength(T l);
        
        //feature functions
        T getArea();
        void print();
        
    private:
        T length;
        T width;
};
#include "rectangle.cpp"
#endif
