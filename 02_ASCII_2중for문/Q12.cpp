
#include <iostream>
char flag;
char a;
char b;
char c;

void input()
{
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
}

void process()
{
    if (a == 'A' && b == 'B' && c == 'C')
    {
        flag = 1;
    }
}

void output()
{
    if (flag == 1)
    {
        std::cout << "ABC를찾았다" << std::endl;
    }
    else {
        std::cout << "못찾았다" << std::endl;
    }
}


int main()
{
    input();
    process();
    output();

    return 0;
}