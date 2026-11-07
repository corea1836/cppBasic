#include <iostream>

int main()
{
    return 0;
}

int RQ9()
{
    char a = '0';
    char b = '0';
    std::cin >> a;
    std::cin >> b;

    char arr[3][6] = {};

    int i = 0;
    while (i < 6)
    {
        int j = 0;
        while (j < 3)
        {
            if (i < 4)
            {
                arr[j][i] = a;
            }
            else
            {
                arr[j][i] = b;
            }
            j++;
        }
        i++;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << arr[i][j];
        }
        std::cout << "\n";
    }
    return 0;
}

int RQ8()
{
    int arr[6][3] = {};

    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < 3)
            {
                arr[i][j] = a;
            }
            else
            {
                arr[i][j] = b;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << arr[i][j];
        }
        std::cout << "\n";
    }
    return 0;
}

int RQ7()
{
    int arr[3][3] = {};

    int a = 0;
    int b = 0;
    int c = 0;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    arr[a][b] = c;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

int RQ6()
{
    char a = '0';
    int b = 0;

    std::cin >> a;
    std::cin >> b;

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {
            std::cout << a;
        }
        std::cout << "\n";
    }

    return 0;
}

int RQ5()
{
    char a = '0';
    char b = '0';
    int c = 0;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    for (int j = 0; j < c; j++)
    {
        for (char i = a; i <= b; i++)
        {
            std::cout << i;
        }
        std::cout << "\n";
    }
    return 0;
}

char RQ4Arr[17] = {};

void input5()
{
    char a = '0';
    char b = '0';
    char c = '0';

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    for (int i = 0; i < 7; i++)
    {
        RQ4Arr[i] = a;
    }

    for (int i = 7; i < 13; i++)
    {
        RQ4Arr[i] = b;
    }

    for (int i = 13; i < 17; i++)
    {
        RQ4Arr[i] = c;
    }

    for (int i = 16; i >= 0; i--)
    {
        std::cout << RQ4Arr[i];
    }
}
int RQ4()
{
    input5();
    return 0;
}

int RQ3()
{
    char arr[5] = {};
    int n = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i];
    }
    return 0;
}

int RQ2()
{
    char arr[6] = { 'D', 'T', 'A', 'B', 'W', 'Q' };
    char input = '0';
    std::cin >> input;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == input)
        {
            std::cout << i << "번 INDEX";
        }
    }

    return 0;
}

int RQ1()
{
    int arr[6] = {};

    for (int i = 0; i < 6; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < 6; i++)
    {
        std::string result = "";
        if (arr[i] < 5)
        {
            result = "불합격";
        }
        else
        {
            result = "합격";
        }

        std::cout << i << "번은 " << arr[i] << "점 " << result << "\n";
    }
    return 0;
}

void starBox()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 1)
        {
            std::cout << i << " ";
        }
    }
}

void macDoll()
{
    char st = 'H';
    for (st; st >= 'A'; st--)
    {
        std::cout << st << " ";
    }
}

void copyBean()
{
    for (int i = -5; i <= 5; i++)
    {
        std::cout << i << " ";
    }
}

int Q11()
{
    int a = 0;
    std::cin >> a;

    if (3500 <= a && a <= 5000)
    {
        starBox();
    }
    else if (2500 <= a && a < 3500)
    {
        macDoll();
    }
    else
    {
        copyBean();
    }
    return 0;
}

int Q10()
{
    int arr[3][4] =
    {
        { 3, 4, 1, 1 },
        { 3, 1, 2, 1 },
        { 0, 0, 1, 2 }
    };

    int a = 0;
    std::cin >> a;
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == a)
            {
                count++;
            }
        }
    }

    std::cout << count << "개 존재합니다";
    return 0;
}

int Q9Arr[2][3] = {};
int Q9Sum = 0;
void input4()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> Q9Arr[i][j];
        }
    }
}

void process4()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Q9Sum += Q9Arr[i][j];
        }
    }
}

void output4()
{
    std::cout << Q9Sum;
}

int Q9()
{
    input4();
    process4();
    output4();
    return 0;
}

int Q8()
{
    char arr[6] = { '#', '_', '#', '_', '#', '#' };

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == '#')
        {
            std::cout << "샵";
        }
        else if (arr[i] == '_')
        {
            std::cout << "무";
        }
    }
    return 0;
}

char Q7Arr1[5] = { 'B', 'D', '5', 'Q', 'A' };
char Q7Arr2[5] = { 'Q', 'E', 'R', 'E', 'F' };
char Q7A = 'a';

char input3()
{
    std::cin >> Q7A;
}

void output3()
{
    if ('a' <= Q7A && Q7A <= 'z')
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << Q7Arr1[i];
        }
    }
    else if ('A' <= Q7A && Q7A <= 'Z')
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << Q7Arr2[i];
        }
    }
    else if ('0' <= Q7A && Q7A <= '9')
    {
        char st = 'H';
        for (st; st >= 'A'; st--)
        {
            std::cout << st;
        }
    }
}

int Q7()
{
    input3();
    output3();
    return 0;
}

int Q6Arr[3][4] = {};

void input2()
{
    int a = 0;
    std::cin >> a;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            Q6Arr[i][j] = a++;
        }
    }
}

void process()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            Q6Arr[i][j] += 1;
        }
    }
}

void output2()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << Q6Arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int Q6()
{
    input2();
    process();
    output2();
    return 0;
}

int Q5()
{
    int arr[6] = { 3, 4, 1, 6, 7, 5 };

    int i = 0;
    while (i < 6)
    {
        std::cout << arr[i] << " ";
        i++;
    }
    return 0;
}

int Q4()
{
    int arr[6] = {};

    for (int i = 0; i < 6; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 5; i >= 0; i--)
    {
        if (arr[i] == 7)
        {
            std::cout << arr[i];
            break;
        }

        std::cout << arr[i] << " ";
    }
    return 0;
}

int Q3A = 0;
int Q3B = 0;

void input()
{
    std::cin >> Q3A;
    std::cin >> Q3B;
}

void output()
{
    int sum = Q3A + Q3B;
    int st = 5;

    while (st <= sum)
    {
        std::cout << st << " ";
        st++;
    }
}

int Q3()
{
    input();
    output();
    return 0;
}

int Q2()
{
    int arr[6] = {};
    for (int i = 0; i < 6; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == 7)
        {
            break;
        }

        std::cout << arr[i] << " ";
    }
    return 0;
}


int Q1()
{
    int n = 0;
    std::cin >> n;

    int i = 1;
    while (i <= n)
    {
        std::cout << i << " ";
        i++;
    }
    return 0;
}