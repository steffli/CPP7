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
        ~Array();
        unsigned int size() const;
        
        T &operator[](unsigned int pos);
        T const &operator[](unsigned int pos) const; 
    
    class OutOfBoundsException : public std::exception{
        public:
            virtual const char *what() const throw();
    };
};

#include "Array.tpp"
#endif