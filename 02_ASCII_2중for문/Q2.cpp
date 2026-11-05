
#include <iostream>

int main()
{
    char A;
    char B;
    char C;

    std::cin >> A;
    std::cin >> B;
    std::cin >> C;

    std::cout << static_cast<int>(A) << std::endl;
    std::cout << static_cast<int>(B) << std::endl;
    std::cout << static_cast<int>(C) << std::endl;

    return 0;
}
