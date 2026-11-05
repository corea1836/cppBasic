

#include <iostream>

int main()
{
    char input;
    std::cin >> input;

    if (input >= 'a' && input <= 'z')
    {
        std::cout << (char)(input - 'a' + 'A') << std::endl;
    }


    return 0;
}
