#include "Array.hpp"

int main()
{
    unsigned int j = 4;

    Array<int> B(j);

    std::cout << "The Array size is: " << B.size() << std::endl;
    // assign arrays elements;
    for (unsigned int i = 0; i < B.size(); ++i)
    {
        B[i] = j;
        j += 3;
    }
    // read arrays elements;
    for (unsigned int i = 0; i < B.size(); ++i)
    {
        std::cout << "B[" << i << "]" << " = " << B[i] << std::endl;
    }
    //throwing exception if the index is not found;
    try
    {
        std::cout << B[2] << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}