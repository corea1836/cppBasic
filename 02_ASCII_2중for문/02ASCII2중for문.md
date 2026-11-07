
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

int Q1()
{

    ABC();
    OUTPUT();

    return 0;
}

int Q2()
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

int Q3()
{
    int a;
    std::cin >> a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

int Q4()
{
    char arr[6] = { '$', '@', 'D', 'A', '9', '#' };

    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << ":" << static_cast<int>(arr[i]) << std::endl;
    }
    return 0;
}

int Q5()
{
    char arr[4] = { 'B', 'T', 'K', 'A' };
    int a;
    std::cin >> a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << arr[j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

int Q6()
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

int Q7()
{
    int a;
    std::cin >> a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            std::cout << "#";
        }
        std::cout << std::endl;
    }
    return 0;
}

int Q8()
{
    char input;
    std::cin >> input;

    if (input >= '0' && input <= '9')
    {
        int t = input - '0';
        std::cout << t + 5 << std::endl;
    }

    return 0;
}

int Q9()
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

int Q10()
{
    char input;
    std::cin >> input;

    if (input >= 'a' && input <= 'z')
    {
        std::cout << (char)(input - 'a' + 'A') << std::endl;
    }


    return 0;
}

int Q11()
{
    char a;
    char b;
    std::cin >> a;
    std::cin >> b;

    if (a == 'A' && b == 'D')
    {
        for (int i = 0; i < 4; i++)
        {
            std::cout << "A B C D" << std::endl;
        }
    }

    if (a == 'B' && b == 'H')
    {
        for (int i = 0; i < 4; i++)
        {
            std::cout << "B C D E F G H" << std::endl;
        }
    }

    return 0;
}

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
    else 
    {
        std::cout << "못찾았다" << std::endl;
    }
}


int Q12()
{
    input();
    process();
    output();

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

    for (int i = 0; i < c; i++)
    {
        for (int j = a; j <= b; j++)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

int RQ1()
{
    char a;
    char b;
    std::cin >> a;
    std::cin >> b;

    std::cout << "문자'" << a << "'의 아스키코드값은 " << static_cast<int>(a) << std::endl;
    std::cout << "문자'" << b << "'의 아스키코드값은 " << static_cast<int>(b) << std::endl;
    return 0;
}

int RQ2()
{
    char ch;
    std::cin >> ch;

    for (ch; ch >= 'a'; ch--)
    {
        std::cout << ch;
    }

    return 0;
}

int RQ3()
{
    int arr1[5] = {};
    int arr2[5] = {};

    for (int i = 0; i < 5; i++)
    {
        int a;
        std::cin >> a;
        arr1[i] = a;
        arr2[i] = a;
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr1[i] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr2[i] << " ";
    }

    return 0;
}

int RQ4()
{
    char ch;
    std::cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        std::cout << "소문자입력!!";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        std::cout << "대문자입력!!";
    }
    else if (ch >= '0' && ch <= '9')
    {
        std::cout << "숫자문자입력!!";
    }
    return 0;
}

int RQ5()
{
    int arr[3] = {};

    for (int i = 0; i < 3; i++)
    {
        std::cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        sum += arr[i];
    }

    for (int i = 0; i < sum; i++)
    {
        std::cout << arr[0] << " " << arr[1] << " " << arr[2] << std::endl;
    }

    return 0;
}

int RQ6()
{
    char arr[5] = {};

    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            count++;
        }
    }

    if (count > 0)
    {
        std::cout << "숫자" << count << "개발견" << std::endl;
    }
    else
    {
        std::cout << "숫자미발견" << std::endl;
    }
    return 0;
}

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

int RQ7()
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

int RQ8()
{
    char arr1[5] = {};
    char arr2[5] = {};

    char input;
    std::cin >> input;

    if (input >= 'E' && input <= 'V')
    {
        for (int i = 0; i < 5; i++)
        {
            arr1[i] = input + i;
            arr2[i] = input - i;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr1[i];
    }
    std::cout << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr2[i];
    }

    return 0;
}

int RQ9()
{
    int arr[] = { 5, 4, 1, 2, 7, 8 };

    int input;
    std::cin >> input;

    for (int i = 0; i < input; i++)
    {
        for (int j = 5; j >= 0; j--)
        {
            std::cout << arr[j] << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}

int RQ10()
{
    char a;
    char b;
    char c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a > b && a > c)
    {
        std::cout << "옳다" << a << std::endl;
    }
    else
    {
        std::cout << "옳지않음";
    }

    return 0;
}

int RQ11()
{
    char a;
    char b;
    std::cin >> a;
    std::cin >> b;

    std::cout << b - a << std::endl;
    return 0;
}
