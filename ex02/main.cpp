#include "Array.hpp"

Array();
Array(unsigned int n) = new T[n]();
Array(const Array &copy);
Array& operator=(const Array &copy);
size_t size(T Array) const;