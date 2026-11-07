int Q1()
{
    int input;
    std::cin >> input;

    if (input >= 10)
    {
        std::cout << "WOW";
    }
    else
    {
        std::cout << "OMG";
    }
    return 0;
}

int Q2()
{
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    if (a > b)
    {
        std::cout << "큰수는 " << a;
    }
    else if (a == b)
    {
        std::cout << "같은숫자";
    }
    else
    {
        std::cout << "큰수는 " << b;
    }
    return 0;
}

int Q3()
{
    int input;
    std::cin >> input;

    if (input == 5 || input == 10)
    {
        std::cout << "만세";
    }
    else
    {
        std::cout << "재도전";
    }
    return 0;
}

int Q4()
{
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    if (a == 7 && b == 9)
    {
        std::cout << "인증됨";
    }
    else
    {
        std::cout << "재시도";
    }
    return 0;
}

int Q5()
{
    for (int i = 3; i <= 10; i++)
    {
        std::cout << i << std::endl;
    }
    return 0;
}

int Q6()
{
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    for (a; a <= b; a++)
    {
        std::cout << a << std::endl;
    }
    return 0;
}

int Q7()
{
    for (int i = 0; i < 25; i++)
    {
        std::cout << "PIZZAHOT" << std::endl;
    }
    return 0;
}

int Q8()
{
    int input;
    std::cin >> input;

    for (int i = 0; i < input; i++)
    {
        std::cout << "##" << std::endl;
    }
    return 0;
}

int Q9()
{
    for (int i = 10; i >= 1; i--)
    {
        std::cout << i << " ";
    }
    return 0;
}

int Q10()
{
    int input;
    std::cin >> input;

    input = ((input * 2) + 20) / 5;
    if (100 != input)
    {
        std::cout << "Magic";
    }

    return 0;
}

int Q11()
{
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    for (a; a <= b; a++)
    {
        std::cout << a;
    }

    return 0;
}

int Q12()
{
    int input;
    std::cin >> input;

    for (int i = 0; i <= input; i++)
    {
        std::cout << i << std::endl;
    }
    return 0;
}

int Q13()
{
    int a;
    int b;
    int c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int sum = a + b + c;
    if (sum > 10)
    {
        std::cout << a * b * c;
    }
    else
    {
        std::cout << 0;
    }
    return 0;
}

int Q14()
{
    int input;
    std::cin >> input;

    for (input; input >= 0; input--)
    {
        std::cout << input << std::endl;
    }

    std::cout << "발사";
    return 0;
}

int Q15()
{
    for (int i = -5; i <= 5; i++)
    {
        std::cout << i << " ";
    }
    return 0;
}

int RQ1()
{
    for (int i = 3; i <= 8; i++)
    {
        std::cout << i << " ";
    }
    return 0;
}

int RQ2()
{
    int input;
    std::cin >> input;

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            std::cout << input + j;
        }
        std::cout << std::endl;
    }
    return 0;
}

int RQ3()
{
    int a;
    int b;
    int c;
    int d;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    if (a == 1 && b == 2 && c == 3 && d == 4)
    {
        std::cout << "로그인성공";
    }
    else
    {
        std::cout << "로그인실패";
    }
    return 0;
}

int RQ4()
{
    int input;
    std::cin >> input;

    input += 2;
    for (int i = 0; i < 3; i++)
    {
        std::cout << input + i << " ";
    }
    return 0;
}

int RQ5()
{
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;

    if (a >= b && a >=c)
    {
        std::cout << "MAX발견";
    }
    else
    {
        std::cout << "MAX아님";
    }

    return 0;
}

int RQ6()
{
    int a;
    int b;
    std::cin >> a >> b;

    int c = a * b;

    if (30 < c && c < 50)
    {
        std::cout << "적당한 사이즈";
    }
    else if (c == 50)
    {
        std::cout << "큰 사이즈";
    }
    else if (c <= 30)
    {
        std::cout << "작은 사이즈";
    }

    return 0;
}

int RQ7()
{
    int a;
    int x;
    std::cin >> a >> x;

    for (int i = 1; i <= x; i++)
    {
        std::cout << a - i << " ";
    }

    return 0;
}

int RQ8()
{
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;

    for (int i = a; i <= b; i++)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    for (int i = a; i <= c; i++)
    {
        std::cout << i << " ";
    }
    return 0;
}

int RQ9()
{
    for (int i = 9; i >= 6; i--)
    {
        std::cout << i << " " << i - 3 << std::endl;
    }
    return 0;
}

int RQ10()
{
    int input;
    std::cin >> input;

    int n = 1;
    for (int i = 0; i < input; i++)
    {
        std::cout << n + (2 * i) << " ";
    }
    return 0;
}

int RQ11()
{
    std::string arr[3] = { "시작", "12345", "종료" };

    for (int i = 0; i < 3; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}

int RQ12()
{
    int input;
    std::cin >> input;

    for (int i = 0; i < input; i++)
    {
        std::cout << "##" << std::endl;
        std::cout << "@@" << std::endl;
    }
    return 0;
}

int RQ13()
{
    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << "번go!!" << std::endl;
    }
    return 0;
}

int RQ14()
{
    int id;
    int pwd;
    std::cin >> id >> pwd;

    if (id != 1111)
    {
        std::cout << "아이디가 틀렸습니다";
    }
    else if (id == 1111 && pwd != 2222)
    {
        std::cout << "비밀번호가 틀렸습니다";
    }
    else
    {
        std::cout << "로그인성공";
    }
    return 0;
}

int RQ15()
{
    int input;
    std::cin >> input;

    for (input; input >= 0; input--)
    {
        std::cout << input;
    }
    return 0;
}
