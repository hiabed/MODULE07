#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>

class Array
{
private:
    T *_a;
public:
    Array()
    {
        _a = NULL;
    }
    Array(unsigned int n)
    {
        _a = new T[n]();
    }
    Array(const Array &other)
    {
        *this = other;
    }
    Array &operator=(const Array &other)
    {
        if (this != &other)
            this->_a = other._a;
        return *this;
    }
    ~Array()
    {
        delete[] _a;
    }
};

#endif