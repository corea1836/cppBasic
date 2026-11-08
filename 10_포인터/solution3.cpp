#include <iostream>

int main()
{

    return 0;
}

void run(int a)
{
    int arr[3][3] = {};
    int st = 1;
    if (a < 10)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr[i][j] = st++;
            }
        }
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 2; j >= 0; j--)
            {
                arr[i][j] = st++;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int Q9()
{
    int a = 0;
    std::cin >> a;
    run(a);
    return 0;
}

char arr2[3][5] =
{
    { 'D', 'A', 'C', 'C', 'D' },
    { 'S', 'D', 'F', 'A', 'E' },
    { 'E', 'E', 'T', 'J', 'H' }
};

int check(char a)
{
    bool flag = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr2[i][j] == a)
            {
                flag = true;
                break;
            }
        }
    }

    return flag;
}

void input2()
{
    char a = '0';
    std::cin >> a;

    int result = check(a);
    if (result == 1)
    {
        std::cout << "있음";
    }
    else
    {
        std::cout << "없음";
    }
}

int Q8()
{
    input2();
    return 0;
}

int arr[7][5] =
{
    { 1, 0, 0, 0, 0 },
    { 1, 0, 1, 0, 0 },
    { 1, 1, 0, 1, 0 },
    { 1, 0, 1, 0, 0 },
    { 0, 1, 0, 0, 1 },
    { 0, 0, 0, 1, 0 },
    { 1, 1, 0, 0, 0 },
};

int input()
{
    int a = 0;
    std::cin >> a;
    return a;
}

int process(int a)
{
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i][a] == 1)
        {
            count++;
        }
    }

    return count;
}

void output(int val)
{
    std::cout << val;
}

int Q7()
{
    int a = input();
    int count = process(a);
    output(count);
    return 0;
}

struct BBQ
{
    int x = 0;
    int data[3] = {};
};

int Q6()
{
    BBQ g;
    std::cin >> g.x;
    std::cin >> g.data[0];
    std::cin >> g.data[1];
    std::cin >> g.data[2];

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += g.data[i];
    }

    std::cout << sum << " " << g.x;
    return 0;
}

int Q5()
{
    int arr[6][3] = {};
    int input = 10;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            arr[j][i] = input++;
        }
    }

    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    for (a; a <= b; a++)
    {
        for (int i = 0; i < 3; i++)
        {
            arr[a][i] = 7;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

int Q4()
{
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int arr[3][4] = {};
    for (int i = 0; i < 4; i++)
    {
        arr[0][i] = a++;
    }

    for (int i = 0; i < 4; i++)
    {
        arr[1][i] = b++;
    }

    for (int i = 0; i < 4; i++)
    {
        arr[2][i] = c++;
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

struct Fruit
{
    int size = 0;
    int price = 0;
};

int Q3()
{
    Fruit banana;
    Fruit apple;

    std::cin >> banana.size;
    std::cin >> apple.size;

    banana.price = banana.size * 250;
    apple.price = apple.size * 500;

    std::cout << banana.price + apple.price << "원";
    return 0;
}
int Q2()
{
    int arr[5][5] = {};
    int a = 1;
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[j][i] = a++;
        }
    }

    int input = 0;
    std::cin >> input;

    for (int i = 0; i < 5; i++)
    {
        arr[input][i] = input;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

int Q1()
{
    int arr[4][4] = {};

    int st = 2;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[j][i] = st;
            st += 2;
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