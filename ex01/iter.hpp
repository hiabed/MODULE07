#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename temp>

void iter(temp *arr, int length, void (*function)(temp &))
{
    for (int i = 0; i < length; i++)
        function(arr[i]);
}

template <typename temp>

void print(temp &i)
{
    std::cout << i << std::endl;
}

#endif