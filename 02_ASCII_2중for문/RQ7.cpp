

#include <iostream>

char toggleCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 'a' + 'A';
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
}

int main()
{
    char a;
    char b;
    std::cin >> a;
    std::cin >> b;

    a = toggleCase(a);
    b = toggleCase(b);

    std::cout << a << " " << b << std::endl;
    return 0;
}