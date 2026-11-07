
#include <iostream>
// \n 을 하면 바로 버퍼를 비우는건가?
// 변수를 저장하는 것 보다 바로 산술연선 쓰는게 좋을까?
int main()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "#";
    }
    return 0;
}

int RQ11()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "#";
    }
    return 0;
}

int RQ10()
{
    int arr[7] = {};

    for (int i = 0; i < 7; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 3; i < 7; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}

int RQ9()
{
    int a;
    int b;
    std::cin >> a >> b;

    if (a + b > 10)
    {
        std::cout << "합만세";
    }
    else if (a * b > 10)
    {
        std::cout << "곱만세";
    }
    return 0;
}

int RQ8()
{
    int a;
    int b;
    std::cin >> a >> b;

    if (a - b > 5)
    {
        std::cout << "멀다";
    }
    else
    {
        std::cout << "가깝다";
    }
    return 0;
}

int RQ7()
{
    int a;
    int b;
    int c;
    int d;

    std::cin >> a >> b >> c >> d;

    int avg = (a + b + c + d) / 4;

    if (a > avg)
    {
        std::cout << a << ">" << avg;
    }
    else if (a == avg)
    {
        std::cout << a << "==" << avg;
    }
    else
    {
        std::cout << a << "<" << avg;
    }
    std::cout << std::endl;

    if (b > avg)
    {
        std::cout << b << ">" << avg;
    }
    else if (b == avg)
    {
        std::cout << b << "==" << avg;
    }
    else
    {
        std::cout << b << "<" << avg;
    }
    std::cout << std::endl;

    if (c > avg)
    {
        std::cout << c << ">" << avg;
    }
    else if (c == avg)
    {
        std::cout << c << "==" << avg;
    }
    else
    {
        std::cout << c << "<" << avg;
    }
    std::cout << std::endl;

    if (d > avg)
    {
        std::cout << d << ">" << avg;
    }
    else if (d == avg)
    {
        std::cout << d << "==" << avg;
    }
    else
    {
        std::cout << d << "<" << avg;
    }
    return 0;
}

int RQ6()
{
    int b1;
    int b2;
    int b3;
    int b4;

    std::cin >> b1 >> b2 >> b3 >> b4;

    if (b1 >= b2 && b1 >= b3 && b1 >= b4)
    {
        std::cout << "b1이 가장 크다";
    }

    return 0;
}

int RQ5()
{
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;

    if (a == b && a == c)
    {
        std::cout << "만세";
    }

    return 0;
}

int RQ4()
{
    int a;
    int b;
    int c;
    int d;
    std::cin >> a >> b >> c >> d;

    std::cout << "a + b = " << a + b << "\n";
    std::cout << "c + d = " << c + d << "\n";
    std::cout << "ALL SUM = " << a + b + c + d;
    return 0;
}


int RQ3()
{
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;

    std::cout << "첫번째 숫자는 " << a << " 입니다.\n";
    std::cout << "두번째 숫자는 " << b << " 입니다.\n";
    std::cout << "세번째 숫자는 " << c << " 입니다.\n";
    return 0;
}

int RQ2()
{
    int a;
    int b;
    std::cin >> a >> b;

    if (a == b)
    {
        std::cout << "같습니다";
    }
    else
    {
        std::cout << "다릅니다";
    }
    return 0;
}

int RQ1()
{
    std::cout << "WWW.\"LJJ\"CODING.CO.KR";

    return 0;
}

int Q12()
{
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;

    if (a + b + c >= a * b * c)
    {
        std::cout << "행운의 수";
    }
    else
    {
        std::cout << "소소한 수";
    }

    return 0;
}

int Q11()
{
    int num;
    std::cin >> num;

    if (num > 0)
    {
        std::cout << "###\n" << "###\n" << "###\n";
    }
    else
    {
        std::cout << "$$$\n" << "$$$\n";
    }
    return 0;
}

int Q10()
{
    int input;
    std::cin >> input;

    if (input > 3)
    {
        input++;
        std::cout << input;
    }
    else
    {
        input--;
        std::cout << input;
    }
    return 0;
}

int Q9()
{
    int a;
    std::cin >> a;

    std::cout << a << " 입력함\n";
    std::cout << "a++을 수행하면 " << ++a << "이 됩니다";
    return 0;
}

int Q8()
{
    int a;
    int b;

    std::cin >> a >> b;

    int big = a > b ? a : b;

    for (int i = 0; i < 4; i++)
    {
        std::cout << big;
    }
    return 0;
}

int Q7()
{
    int a;
    int b;
    std::cin >> a >> b;

    if (a > b)
    {
        std::cout << "a가b보다크다";
    }
    else
    {
        std::cout << "b가a보다같거나크다";
    }
    return 0;
}

int Q6()
{
    int a;
    int b;

    std::cin >> a >> b;

    std::cout << a << "+" << b << "=" << a + b << "\n";
    std::cout << a << "*" << b << "=" << a * b << "\n";
    std::cout << a << "/" << b << "=" << a / b << "\n";
    return 0;
}

int Q5()
{
    int a;
    int b;
    std::cin >> a >> b;

    std::cout << "두 숫자의 차는 " << a - b << " 입니다.";
    return 0;
}

int Q4()
{
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;

    std::cout << a;
    std::cout << a;
    std::cout << a << "\n";

    std::cout << b;
    std::cout << b;
    std::cout << b << "\n";

    std::cout << c;
    std::cout << c;
    std::cout << c << "\n";
    return 0;
}

int Q3()
{
    int input;
    std::cin >> input;

    std::cout << input << " ";
    std::cout << input << " ";
    std::cout << input << " ";
    return 0;
}

int Q2()
{
    int a;

    std::cin >> a;

    std::cout << a << " 입력하셨군요";
    return 0;
}

int Q1()
{
    int input;
    std::cin >> input;

    std::cout << "멋지군요!! 칭찬합니다.";

    return 0;
}
