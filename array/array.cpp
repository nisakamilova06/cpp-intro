#include <iostream>

int main()
{
    size_t size;
    std::cin >> size;

    int arr[size];
    for(size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    {

    int arr[1024];
    size_t i = 0;
    int in;
    do
    {
        std::cin >> in;
        arr[i] = in;
        i++;
    } while (in);

    }

    return 0;
}
