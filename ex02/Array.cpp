#include "Array.hpp"

//orthodox canolical form;

Array::Array()
{
    // T a[];
}

Array::Array(const Array &other)
{
    *this = other;
}

Array &Array::operator=(const Array &other)
{
    (void)other;
    return *this;
}

Array::~Array()
{
}
