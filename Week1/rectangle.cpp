#include "rectangle.h"
    //constructors
    template <class T>
    Rectangle<T>::Rectangle(){
        width = 1;
        length = 1;
    }
    template <class T>
    Rectangle<T>::Rectangle(T w){
        width = w;
        length = 1;
    }
    template <class T>
    Rectangle<T>::Rectangle(T w, T l){
        width = w;
        length = l;
    }
        
    //mutators and accessors
    template <class T>
    T Rectangle<T>::getLength(){
        return length;
    }
    template <class T>
    T Rectangle<T>::getWidth(){
        return width;
    }
    template <class T>
    void Rectangle<T>::setWidth(T w){
        width = w;
    }
    template <class T>
    void Rectangle<T>::setLength(T l){
        length = l;
    }
    
    //feature functions
    template <class T>
    T Rectangle<T>::getArea(){
        return length*width;
    }
    
    