
#include <iostream>


int main()
{
    return 0;
}

char aToZ()
{
    char a = '0';
    std::cin >> a;

    if ('A' <= a && a <= 'M')
    {
        return 'A';
    }

    if ('M' < a && a <= 'Z')
    {
        return 'Z';
    }
}

int Q12()
{
    char result = aToZ();

    std::cout << result;
    return 0;
}

char scoring()
{
    int a = 0;
    std::cin >> a;

    if (a >= 90)
    {
        return 'A';
    }

    if (a >= 80)
    {
        return 'B';
    }

    if (a >= 70)
    {
        return 'C';
    }

    return 'D';
}

int Q11()
{
    char result = scoring();
    std::cout << result;
    return 0;
}

int yesOrNo()
{
    int a = 0;
    std::cin >> a;

    if (a % 3 == 0)
    {
        return 7;
    }
    else if (a % 3 == 1)
    {
        return 35;
    }
    else if (a % 3 == 2)
    {
        return 50;
    }
}

int Q10()
{
    int result = yesOrNo();

    std::cout << result;
    return 0;
}

int INPUT()
{
    int a = 0;
    std::cin >> a;
    return a;
}

void CountDown(int a)
{
    for (a; a >= 1; a--)
    {
        std::cout << a << " ";
    }
}

int Q9()
{
    int a = INPUT();
    CountDown(a);
    return 0;
}

int Q8()
{
    int arr[4][4] = {};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 0)
            {
                std::cout << "! ";
            }
            else if (arr[i][j] % 2 == 0)
            {
                std::cout << "# ";
            }
            else if (arr[i][j] % 2 == 1)
            {
                std::cout << "@ ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}

int Q7()
{
    int arr[3][4] = {};
    int count = 1;

    for (int i = 2; i >= 0; i--)
    {
        for (int j = 3; j >= 0; j--)
        {
            arr[i][j] = count++;
        }
    }

    int input = 0;
    std::cin >> input;

    for (int i = 0; i < 3; i++)
    {
        arr[i][input] = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

int Q6()
{
    int arr[4][4] = {};
    int count = 1;
    for (int i = 3; i >= 0; i--)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[j][i] = count++;
        }
    }


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

int GOP()
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    return a * b;
}

int SUM()
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    return a + b;
}

int Q5()
{
    int resultGop = GOP();
    int resultSum = SUM();

    if (resultGop > resultSum)
    {
        std::cout << "GOP>SUM";
    }
    else if (resultGop < resultSum)
    {
        std::cout << "GOP<SUM";
    }
    else
    {
        std::cout << "GOP==SUM";
    }
    return 0;
}

void printData(int value)
{
    std::cout << value << "\n";
}

void even(int value)
{
    value *= 2;
    printData(value);
}

void odd(int value)
{
    value -= 10;
    printData(value);
}

int Q4()
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    if (a / b % 2 == 0)
    {
        even(a / b);
    }
    else
    {
        odd(a / b);
    }

    printData(a + b);
    return 0;
}

int Q3()
{
    int arr[3][3] = {};
    int input = 0;
    std::cin >> input;

    if (input % 5 == 1)
    {
        int count = 1;
        for (int i = 2; i >= 0; i--)
        {
            for (int j = 2; j >= 0; j--)
            {
                arr[j][i] = count++;
            }
        }
    }
    else if (input % 5 == 2)
    {
        int count = 1;
        for (int i = 2; i >= 0; i--)
        {
            for (int j = 0; j <= 2; j++)
            {
                arr[i][j] = count++;
            }
        }
    }
    else
    {
        int count = 10;
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                arr[j][i] = count++;
            }
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

char getChar()
{
    char a = 'a';
    char b = 'a';

    std::cin >> a;
    std::cin >> b;

    if (a > b)
    {
        return a;
    }

    return b;

}

int Q2()
{
    char result = getChar();

    std::cout << result;

    return 0;
}

int Q1()
{
    int arr[4][4] = {};
    int input = 0;
    std::cin >> input;

    int count = 1;
    if (input % 2 == 0)
    {
        for (int i = 0; i < 4; i++)
        {
            arr[i][i] = count++;
        }
    }
    else
    {
        for (int i = 3; i >= 0; i--)
        {
            arr[i][i] = count++;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}