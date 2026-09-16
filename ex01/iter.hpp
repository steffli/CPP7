#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>
#include <cstring>


template <typename T_array, typename T_function> void iter(T_array *arr, size_t len, T_function func){
    for (size_t i = 0; i < len; i++){
        func(arr[i]);
    }
}

#endif