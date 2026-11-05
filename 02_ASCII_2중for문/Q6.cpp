
#include <iostream>

int main()
{
    char a;
    std::cin >> a;
    // a = 97, z = 122
    // A = 65, Z = 90

    if (a >= 65 && a <= 90)
    {
        std::cout << "대문자입니다";
    }
    else if (a >= 97 && a <= 122)
    {
        std::cout << "소문자입니다";
    }


    return 0;
}
