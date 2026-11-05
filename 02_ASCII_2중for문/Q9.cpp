

#include <iostream>

int main()
{
    char input;
    std::cin >> input;

    if (input >= 'A' && input <= 'Z')
    {
        for (char x = 'A'; x <= input; x++)
        {
            std::cout << x;
        }
    }

    return 0;
}
