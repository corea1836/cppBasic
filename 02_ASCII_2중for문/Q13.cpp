

#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    for (int i = 0; i < c; i++)
    {
        for (int j = a; j <= b; j++)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
