
#include <iostream>

int main()
{
    char a;
    char b;
    std::cin >> a;
    std::cin >> b;

    std::cout << "문자'" << a << "'의 아스키코드값은 " << static_cast<int>(a) << std::endl;
    std::cout << "문자'" << b << "'의 아스키코드값은 " << static_cast<int>(b) << std::endl;
    return 0;
}
