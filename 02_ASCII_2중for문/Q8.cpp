
#include <iostream>

int main()
{
    char input;
    std::cin >> input;

    if (input >= '0' && input <= '9')
    {
        int t = input - '0';
        std::cout << t + 5 << std::endl;
    }

    return 0;
}
