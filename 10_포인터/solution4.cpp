

#include <iostream>

int main()
{
    int arr[3][3] =
    {
        { 3, 1, 6 },
        { 7, 8, 4 },
        { 9, 2, 3 },
    };

    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    arr[a][b] = c;

    int MAX = INT_MIN;
    int MIN = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > MAX)
            {
                MAX = arr[i][j];
            }

            if (arr[i][j] < MIN)
            {
                MIN = arr[i][j];
            }
        }
    }

    std::cout << MAX + MIN;
    return 0;
}

int Q9()
{
    int arr[3][3] =
    {
        { 3, 1, 6 },
        { 7, 8, 4 },
        { 9, 2, 3 },
    };

    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    arr[a][b] = c;

    int MAX = INT_MIN;
    int MIN = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > MAX)
            {
                MAX = arr[i][j];
            }

            if (arr[i][j] < MIN)
            {
                MIN = arr[i][j];
            }
        }
    }

    std::cout << MAX + MIN;
    return 0;
}

char arr2[3][3] =
{
    { 'a', 'b', 'd' },
    { 'e', 'w', 'z' },
    { 'q', 'v', 'a' },
};

char input()
{
    char a = '0';
    std::cin >> a;
    return a;
}

void process(char a)
{
    a = a - 'A' + 'a';

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr2[i][j] == a)
            {
                std::cout << "존재";
                return;
            }
        }
    }

    std::cout << "없음";
}

int Q8()
{
    char a = input();
    process(a);
    return 0;
}

int Q7()
{
    char arr[3][3] =
    {
        { 'a', 'b', 'E' },
        { 'E', '2', 'W' },
        { '3', '2', '4' },
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            char a = arr[i][j];
            if ('A' <= a && a <= 'Z')
            {
                std::cout << static_cast<char>(a - 'A' + 'a');
            }
            else if ('a' <= a && a <= 'z')
            {
                std::cout << static_cast<char>(a - 'a' + 'A');
            }
            else if ('0' <= a && a <= '9')
            {
                int val = arr[i][j] - '0';
                std::cout << val + 5;
            }
        }
        std::cout << "\n";
    }
    return 0;
}

void CompareGo(int arr1[], int arr2[])
{
    bool flag = true;
    for (int i = 0; i < 5; i++)
    {
        if (arr1[i] != arr2[i])
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        std::cout << "두배열은완전같음";
    }
    else
    {
        std::cout << "두배열은같지않음";
    }
}
int Q6()
{
    int arr[5] = { 3, 5, 1, 2, 7 };
    int arr2[5] = {};

    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr2[i];
    }

    CompareGo(arr, arr2);
    return 0;
}

int Q5()
{
    int arr[2][3] = {};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                std::cout << "#";
            }
            else
            {
                std::cout << arr[i][j];
            }
        }
        std::cout << "\n";
    }


    return 0;
}

int Q4()
{
    char arr[3][5] =
    {
        { 'a', 'b', 'a', 'c', 'z' },
        { 'c', 't', 'a', 'c', 'd' },
        { 'c', 'c', 'c', 'c', 'a' },
    };

    char input = '0';
    std::cin >> input;

    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == input)
            {
                count++;
            }
        }
    }

    if (count >= 7)
    {
        std::cout << "세상에";
    }
    else if (count >= 5)
    {
        std::cout << "와우";
    }
    else if (count >= 3)
    {
        std::cout << "이야";
    }
    else
    {
        std::cout << "이런";
    }
    return 0;
}

int Q3()
{
    char arr[7] = { 'A', '1', '1', '1', '5', 'A', 'w' };
    char input = '0';
    std::cin >> input;

    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == input)
        {
            count++;
        }
    }

    if (count >= 3)
    {
        std::cout << "THREE";
    }
    else if (count == 2)
    {
        std::cout << "TWO";
    }
    else if (count == 1)
    {
        std::cout << "ONE";
    }
    else
    {
        std::cout << "NOTHING";
    }
    return 0;
}

int arr[3][3] =
{
    { 1, 1, 1 },
    { 1, 2, 1 },
    { 3, 6, 3 },
};

int Count(int x)
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == x)
            {
                count++;
            }
        }
    }

    return count;
}

int Q2()
{
    int input = 0;
    std::cin >> input;

    int result = Count(input);
    std::cout << result;
    return 0;
}

int Q1()
{
    char arr[6] = { 'D', 'F', 'G', 'D', 'A', 'Q' };
    char a = '0';
    char b = '0';
    std::cin >> a;
    std::cin >> b;

    for (int i = 0; i < 6; i++)
    {
        if (a <= arr[i] && arr[i] <= b)
        {
            std::cout << "발견!!";
            break;
        }
    }
    return 0;
}
