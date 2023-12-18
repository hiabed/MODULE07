#include "Array.hpp"


int main()
{
    unsigned int j = 4;
    Array<int> A(j);
    Array<int> B = A;
    std::cout << B.size() << std::endl;
    for (unsigned int i = 0; i < B.size(); ++i)
    {
        std::cout << "B[" << i << "]" << " = " << B[i] << std::endl;
    }
    try
    {
        std::cout << B[0] << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    system("leaks Array");
}