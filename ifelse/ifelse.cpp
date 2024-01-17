#include <iostream>

int main()
{
    int a = 23;
    int b = 268;

    if(a > b)
    {
        std::cout << "a > b\n";
    }
    else if(a < b)
    {
        std::cout << "a < b\n";
    }
    else
    {
        std::cout << "a ==b\n";
    }
}