#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>
#include <exception>

template<class T>
class Array{
    private:
        T *_data;
        unsigned int _size;
    
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &copy);
        Array& operator=(const Array &copy);
        size_t size(T Array) const;

}

#endif