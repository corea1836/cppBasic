
#include <iostream>

int main()
{
    char a;
    char b;
    char c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a > b && a > c)
    {
        std::cout << "옳다" << a << std::endl;
    }
    else
    {
        std::cout << "옳지않음";
    }

    return 0;
}
