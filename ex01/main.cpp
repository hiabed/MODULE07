#include "iter.hpp"

int main()
{
    std::cout << "int array\n";
    const int arr[] = {1, 2, 3, 4};
    iter(arr, 4, &print);

    std::cout << "\narray of characters\n";
    const char s[] = "hello";
    iter(s, 5, &print);

    std::cout << "\ndouble array\n";
    const double dArr[] = {1.2, 2.3, 3.4, 4.5};
    iter(dArr, 4, &print);

    std::cout << "\narray of strings\n";
    const std::string strings[] = {"hello", "world", "!!"};
    iter(strings, 3, &print);
}