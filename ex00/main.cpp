#include "whatever.hpp"

template<typename temp>

void swap(temp &a, temp &b)
{
    temp c = b;
    b = a;
    a = c;
}

template<typename temp>

temp &min(temp &a, temp &b)
{
    if (a < b)
        return a;
    return b;
}

template<typename temp>

temp &max(temp &a, temp &b)
{
    if (a > b)
        return a;
    return b;
}


int main()
{
    float a = 2.2;
    float b = 2.2;
    std::cout << "pointer: " << &b << std::endl;
    std::cout << "pointer: " << &a << std::endl;
    swap(a, b);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << max(a, b) << "pointer: " << &b << std::endl;
    std::cout << min(a, b) << "pointer: " << &b << std::endl;
}