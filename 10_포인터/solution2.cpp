
#include <iostream>


int main()
{
    return 0;
}

int Q11()
{
    int arr[4][4] =
    {
        { 1, 3, 6, 2 },
        { 4, 2, 4, 5 },
        { 6, 3, 7, 3 },
        { 1, 5, 4, 6 },
    };

    int input = 0;
    std::cin >> input;

    int select[16] = {};
    int selectIdx = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] > input)
            {
                select[selectIdx] = arr[i][j];
                selectIdx++;
            }
        }
    }

    for (int i = 0; i < selectIdx; i++)
    {
        std::cout << select[i] << " ";
    }

    return 0;
}

int vect[2][5] =
{
    { 3, 2, 6, 2, 4 },
    { 1, 4, 2, 6, 5 }
};

int KFC(int target)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (vect[i][j] == target)
            {
                return 1;
            }
        }
    }

    return 0;
}

int Q10()
{
    int target = 0;
    std::cin >> target;
    int result = KFC(target);

    if (result == 1)
    {
        std::cout << "값이 존재합니다";
    }
    else
    {
        std::cout << "값이 없습니다";
    }
    return 0;
}

int Q9()
{
    char arr[8] = {};
    for (int i = 0; i < 8; i++)
    {
        std::cin >> arr[i];
    }

    char big[8] = {};
    char small[8] = {};

    int bigIdx = 0;
    int smallIdx = 0;

    for (int i = 0; i < 8; i++)
    {
        if ('A' <= arr[i] && arr[i] <= 'Z')
        {
            big[bigIdx] = arr[i];
            bigIdx++;
        }
        else if ('a' <= arr[i] && arr[i] <= 'z')
        {
            small[smallIdx] = arr[i];
            smallIdx++;
        }
    }

    std::cout << "big=";

    for (int i = 0; i < bigIdx; i++)
    {
        std::cout << big[i];
    }
    std::cout << "\n";

    std::cout << "small=";

    for (int i = 0; i < smallIdx; i++)
    {
        std::cout << small[i];
    }
    std::cout << "\n";
    return 0;
}

int Q8()
{
    char arr[13] = { 'S', 't', 'r', 'u', 'c', 't', 'P', 'o', 'i', 'n', 't', 'e', 'r' };
    char input = '0';
    std::cin >> input;
    bool flag = false;
    for (int i = 0; i < 13; i++)
    {
        if (arr[i] == input)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        std::cout << "발견";
    }
    else
    {
        std::cout << "미발견";
    }
    return 0;
}

int Q7()
{
    int arr[7] = {};
    for (int i = 0; i < 7; i++)
    {
        std::cin >> arr[i];
    }

    int MAX = INT_MIN;
    int MIN = INT_MAX;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] >= MAX)
        {
            MAX = arr[i];
        }

        if (arr[i] <= MIN)
        {
            MIN = arr[i];
        }
    }

    std::cout << "MAX=" << MAX << "\n";
    std::cout << "MIN=" << MIN << "\n";
    return 0;
}

int Q6()
{
    int arr[7] = { 3, 4, 1, 3, 2, 7, 3 };
    int a = 0;
    std::cin >> a;

    bool flag = false;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == a)
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        std::cout << "발견";
    }
    else
    {
        std::cout << "미발견";
    }
    return 0;
}

int Q5()
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    int* p = &a;
    int* t = &b;

    int temp = *p;
    *p = *t;
    *t = temp;

    std::cout << *p << " ";
    std::cout << *t;
    return 0;
}

int Q4()
{
    char a = '0';
    char b = '0';
    char c = '0';

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    char* ap = &a;
    char* bp = &b;
    char* cp = &c;

    (*ap)++;
    (*bp)++;
    (*cp)++;

    std::cout << *ap << " ";
    std::cout << *bp << " ";
    std::cout << *cp;
    return 0;
}

int Q3()
{
    int a = 0;
    char gd = '0';

    std::cin >> a;
    std::cin >> gd;

    int* p = &a;
    char* t = &gd;

    std::cout << *p << " ";
    std::cout << *t;

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int comp(int a, int b)
{
    return a - b;
}

void print(int sum, int comp)
{
    std::cout << "합:" << sum << "\n";
    std::cout << "차:" << comp;
}

int Q2()
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    int resultSum = sum(a, b);
    int resultComp = comp(a, b);

    print(resultSum, resultComp);
    return 0;
}

int input()
{
    int a = 0;
    std::cin >> a;
    return a;
}

void cals(int a, int b, int c)
{
    std::cout <<  a + b + c;

}

int Q1()
{
    int a = input();
    int b = input();
    int c = input();

    cals(a, b, c);

    return 0;
}