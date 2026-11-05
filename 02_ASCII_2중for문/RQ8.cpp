

#include <iostream>

int main()
{
    char arr1[5] = {};
    char arr2[5] = {};

    char input;
    std::cin >> input;

    if (input >= 'E' && input <= 'V')
    {
        for (int i = 0; i < 5; i++)
        {
            arr1[i] = input + i;
            arr2[i] = input - i;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr1[i];
    }
    std::cout << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr2[i];
    }

    return 0;
}
