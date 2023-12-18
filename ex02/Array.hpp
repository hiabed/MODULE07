#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>

class Array
{
private:
    T *_a;
    unsigned int _n;
public:
    Array()
    {
        _a = NULL;
    }
    Array(unsigned int n)
    {
        _n = n;
        _a = new T[_n]();
    }
    Array(const Array &other)
    {
        *this = other;
    }
    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            delete[] _a;
            _n = other._n;
            _a = new T[_n](); // deep copy;
            for (int i = 0; i < _n; i++)
                this->_a[i] = other._a[i];
        }
        return *this;
    }
    ~Array()
    {
        delete[] _a;
    }
};

#endif