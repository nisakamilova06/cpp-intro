#include <iostream>
int main()
{
    size_t size;
    size_t an;
    int t;

    std::cin >> size;
    std::cin >> an;
    int arr[size];
    arr[0]=1;
    for (size_t i = 1; i < size-1; i++)
    {
        t = 0;
        for(size_t s = 0; s < an; s++)
        {
            if (!(i-s < 0))
            {
                t+=arr[i-s];
            }
            else
            {
                break;
            }
        }
        arr[i] = t;

    }
    std::cout << arr[-1];
}