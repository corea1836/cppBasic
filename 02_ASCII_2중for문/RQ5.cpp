
#include <iostream>

int main()
{
    int arr[3] = {};

    for (int i = 0; i < 3; i++)
    {
        std::cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        sum += arr[i];
    }

    for (int i = 0; i < sum; i++)
    {
        std::cout << arr[0] << " " << arr[1] << " " << arr[2] << std::endl;
    }

    return 0;
}
