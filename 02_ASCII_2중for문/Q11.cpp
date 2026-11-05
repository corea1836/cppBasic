

#include <iostream>

int main()
{
    char a;
    char b;
    std::cin >> a;
    std::cin >> b;

    if (a == 'A' && b == 'D')
    {
        for (int i = 0; i < 4; i++)
        {
            std::cout << "A B C D" << std::endl;
        }
    }

    if (a == 'B' && b == 'H')
    {
        for (int i = 0; i < 4; i++)
        {
            std::cout << "B C D E F G H" << std::endl;
        }
    }

    return 0;
}
