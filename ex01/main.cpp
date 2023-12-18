#include "iter.hpp"

int main()
{
    std::cout << "int array\n";
    int arr[] = {1, 2, 3, 4};
    iter<int, int>(arr, 4, &print);

    std::cout << "\narray of characters\n";
    char s[] = "hello";
    iter<char, char>(s, 5, &print);

    std::cout << "\ndouble array\n";
    double dArr[] = {1.2, 2.3, 3.4, 4.5};
    iter<double, double>(dArr, 4, &print);

    std::cout << "\narray of strings\n";
    std::string strings[] = {"hello", "world", "!!"};
    iter<std::string, std::string>(strings, 3, &print);
}