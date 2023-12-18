#ifndef ARRAY_HPP
#define ARRAY_HPP

// template<class T>

class Array
{
private:
    // T a;
public:
    Array();
    Array(const Array &other);
    Array &operator=(const Array &other);
    ~Array();
};

#endif