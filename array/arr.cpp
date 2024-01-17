#include <iostream>
int main()
{
    size_t size;
    size_t up = 0;
    size_t down = 0;
    size_t un = 0;

    std::cin >> size;
    int arr[size];
    for(size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    for(size_t i = 0; i < size-1; i++)
    {
        if (arr[i]<arr[i+1])
        {
            up++;
        }
        else if (arr[i]>arr[i+1])
        {
            down++;
        }
        else
        {
            un++;
        }
    }
    std::cout << up << '\t' << down << '\t' << un << '\n';
    if (up!=0 && down==0 && un==0)
    {
        std::cout << "UP";
    }
    else if (up==0 && down!=0 && un==0)
    {
        std::cout << "DOWN";
    }
    else
    {
        std::cout << "NOT SORTED";
    }
}