#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>

class Array
{
private:
    //private attributes;
    T *_a;
    unsigned int _n;
public:
    size_t size() const
    {
        return _n;
    }
    //orthodox canolical form;
    Array()
    {
        _n = 0;
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
            _n = other._n;
            _a = new T[_n]();
            for (unsigned int i = 0; i < _n; i++)
                this->_a[i] = other._a[i];
        }
        return *this;
    }
    T &operator[](unsigned int index)
    {
        if (index < _n)
            return _a[index];
        throw std::out_of_range("Index out of range");
    }
    ~Array()
    {
        delete[] _a;
    }
};

#endif