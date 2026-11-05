

#include <iostream>

int main()
{
    int arr[] = { 5, 4, 1, 2, 7, 8 };

    int input;
    std::cin >> input;

    for (int i = 0; i < input; i++)
    {
        for (int j = 5; j >= 0; j--)
        {
            std::cout << arr[j] << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
