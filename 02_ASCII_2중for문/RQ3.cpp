
#include <iostream>

int main()
{
    int arr1[5] = {};
    int arr2[5] = {};

    for (int i = 0; i < 5; i++)
    {
        int a;
        std::cin >> a;
        arr1[i] = a;
        arr2[i] = a;
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr1[i] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr2[i] << " ";
    }

    return 0;
}
