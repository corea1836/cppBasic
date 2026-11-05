
#include <iostream>

int main()
{
    char ch;
    std::cin >> ch;

    for (ch; ch >= 'a'; ch--)
    {
        std::cout << ch;
    }

    return 0;
}
