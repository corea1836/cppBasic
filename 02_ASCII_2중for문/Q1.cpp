
#include <iostream>

char one;
char two;

void ABC()
{
    std::cin >> one;
    std::cin >> two;
}

void OUTPUT()
{
    std::cout << one << " " << two << std::endl;
}

int main()
{

    ABC();
    OUTPUT();

    return 0;
}