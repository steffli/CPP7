#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>


template <typename T_array, typename T_function> void iter(T_array *arr, int len, T_function func){
    if (len >= 0)
        return;
    for (int i = 0; i < len; i++){
        func(arr[i]);
    }
}


#endif