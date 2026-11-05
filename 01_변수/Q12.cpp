
#include <iostream>
#include <ostream>

int main()
{
    int a;
    a = 8;

    int result = 1;
    for (int i = 0; i < 5; i++)
    {
        result *= a;
    }

    std::cout << result << std::endl;

    return 0;
}
