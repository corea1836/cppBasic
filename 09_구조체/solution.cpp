
#include <iostream>


int main()
{

    return 0;
}

void BBQ(int value)
{
    for (int i = 1; i <= value; i++)
    {
        std::cout << i;
    }
}

void KFC(char value)
{
    for (int i = 0; i < 7; i++)
    {
        std::cout << value;
    }
}

int RQ8()
{
    int a = 0;
    std::cin >> a;

    if (a % 2 == 1)
    {
        int b = 0;
        std::cin >> b;
        BBQ(b);
    }
    else
    {
        char b = '0';
        std::cin >> b;
        KFC(b);
    }

    return 0;
}

struct PROJECT
{
    int num = 0;
    char id = '0';
    int vect[4] = {};
};

int RQ7()
{
    PROJECT z;
    int input = 0;
    std::cin >> input;

    if (1 <= input && input <= 9)
    {
        z.num = 5;
        z.id = 'G';
        z.vect[0] = 1;
        z.vect[1] = 2;
        z.vect[2] = 3;
        z.vect[3] = 4;
    }
    else if (10 <= input & input <= 99)
    {
        z.num = 8;
        z.id = 'T';
        z.vect[0] = 5;
        z.vect[1] = 1;
        z.vect[2] = 2;
        z.vect[3] = 3;
    }
    else
    {
        z.num = 10;
        z.id = 'Q';
        z.vect[0] = 9;
        z.vect[1] = 1;
        z.vect[2] = 6;
        z.vect[3] = 2;
    }

    std::cout << z.num << "\n";
    std::cout << z.id << "\n";
    for (int i = 0; i < 4; i++)
    {
        std::cout << z.vect[i] << " ";
    }
    return 0;
}

int RQ6()
{
    int arr[3][3] =
    {
        { 3, 5, 14 },
        { 2, 3, 9 },
        { 6, 2, 7 }
    };

    int input = 0;
    std::cin >> input;

    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] % input == 0)
            {
                count++;
            }
        }
    }

    std::cout << count;

    return 0;
}

char RQ5Arr[2][3] = {};

void input5()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> RQ5Arr[i][j];
        }
    }
}

void findUpper()
{
    int count = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ('A' <= RQ5Arr[i][j] && RQ5Arr[i][j] <= 'Z')
            {
                count++;
            }
        }
    }

    std::cout << "대문자" << count << "개\n";
}

void findLower()
{
    int count = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ('a' <= RQ5Arr[i][j] && RQ5Arr[i][j] <= 'z')
            {
                count++;
            }
        }
    }

    std::cout << "소문자" << count << "개\n";
}

int RQ5()
{
    input5();
    findUpper();
    findLower();
    return 0;
}

int RQ4()
{
    int arr[3][3] =
    {
        { 10, 3, 20 },
        { 60, 30, 40 },
        { 20, 30, 40 },
    };

    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a <= arr[i][j] && arr[i][j] <= b)
            {
                count++;
            }
        }
    }

    std::cout << count;
    return 0;
}

int RQ3()
{
    char arr[5][3] =
    {
        { 'D', 'A', 'A' },
        { 'B', 'C', 'D' },
        { 'E', 'F', 'A' },
        { 'A', 'A', 'D' },
        { 'F', 'G', 'E' },
    };

    char input = '0';
    std::cin >> input;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == input)
            {
                std::cout << "(" << i << "," << j << ")\n";
            }
        }
    }
    return 0;
}

int RQ2()
{
    char arr[5] = {};
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
        if (arr[i] == 'A')
        {
            count++;
        }
    }

    std::cout << "문자A는 " << count << "개발견\n";
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 'A')
        {
            std::cout << i << "번\n";
        }
    }

    return 0;
}

int RQ1()
{
    int arr1[6] = { 2, 1, 2, 4, 5 };
    int arr2[3][3] =
    {
        { 2, 5, 3 },
        { 4, 5, 7 },
        { 8, 7, 2 }
    };

    int a = 0;
    std::cin >> a;

    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr1[i] == a)
        {
            count++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr2[i][j] == a)
            {
                count++;
            }
        }
    }

    std::cout << count;
    return 0;
}

struct Person
{
    int age = 0;
    int height = 0;
};

Person a;
Person b;

void input3()
{
    std::cin >> a.age;
    std::cin >> a.height;
    std::cin >> b.age;
    std::cin >> b.height;
}

void output3()
{
    std::cout << (a.age + b.age) / 2 << " ";
    std::cout << (a.height + b.height) / 2;
}

int Q11()
{
    input3();
    output3();
    return 0;
}

void checkChar(char target)
{
    if ('A' <= target && target <= 'Z')
    {
        std::cout << "대";
    }
    else if ('a' <= target && target <= 'z')
    {
        std::cout << "소";
    }
}

int Q10()
{
    char arr[5] = {};

    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        checkChar(arr[i]);
    }

    return 0;
}

char Q9Arr[2][3] =
{
    { 'F', 'E', 'W' },
    { 'D', 'C', 'A' }
};

void findCh(char target)
{
    int count = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Q9Arr[i][j] == target)
            {
                count++;
            }
        }
    }

    if (count > 0)
    {
        std::cout << "발견";
    }
    else
    {
        std::cout << "미발견";
    }
}

int Q9()
{
    char a = '0';
    std::cin >> a;

    findCh(a);
    return 0;
}

void BBQ(int a, int b)
{
    std::cout << "합:" << a + b << "\n";
    std::cout << "차:" << a - b << "\n";
    std::cout << "곱:" << a * b << "\n";
    std::cout << "몫:" << a / b;
}

int Q8()
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;
    BBQ(a, b);
    return 0;
}

int Q7()
{
    int arr[6][2] =
    {
        { 3, 4 },
        { 2, 6 },
        { 7, 1 },
        { 2, 8 },
        { 1, 9 },
        { 1, 2 }
    };

    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i][0] < arr[i][1])
        {
            int temp = arr[i][0];
            arr[i][0] = arr[i][1];
            arr[i][1] = temp;
            count++;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i][0] << " " << arr[i][1] << "\n";
    }

    std::cout << count << "명";

    return 0;
}

int Q6()
{
    char arr[3][3] = {};
    char st = 'A';
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = st++;
        }
    }

    int y1 = 0;
    int x1 = 0;
    int y2 = 0;
    int x2 = 0;
    std::cin >> y1;
    std::cin >> x1;
    std::cin >> y2;
    std::cin >> x2;

    char temp = '0';
    temp = arr[y1][x1];
    arr[y1][x1] = arr[y2][x2];
    arr[y2][x2] = temp;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << arr[i][j];
        }
        std::cout << "\n";
    }

    return 0;
}

struct ABC
{
    int x;
    int y;
};

int Q5()
{
    ABC t;

    std::cin >> t.x;
    std::cin >> t.y;

    std::cout << t.x + t.y;

    return 0;
}

int Q4()
{
    int arr[6] = { 3, 4, 2, 5, 7, 9 };
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;

    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}

int Q3()
{
    char arr[6] = { 'A', 'F', 'G', 'A', 'B', 'C' };
    char a = '0';
    char b = '0';
    std::cin >> a;
    std::cin >> b;

    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == a)
        {
            count1++;
        }

        if (arr[i] == b)
        {
            count2++;
        }
    }

    if (count1 > 0 && count2 > 0)
    {
        std::cout << "와2개";
    }
    else if (count1 > 0 || count2 > 0)
    {
        std::cout << "오1개";
    }
    else
    {
        std::cout << "우0개";
    }
    return 0;
}

int Q2()
{
    char arr[3][6] =
    {
        { 'A', 'B', 'C', 'D', 'E' },
        { 'E', 'A', 'B', 'A', 'B' },
        { 'A', 'C', 'D', 'E', 'R' }
    };

    char input = '0';
    std::cin >> input;

    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr[i][j] == input)
            {
                count++;
            }
        }
    }

    if (count >= 3)
    {
        std::cout << "대발견";
    }
    else if (1 <= count && count <= 2)
    {
        std::cout << "발견";
    }
    else
    {
        std::cout << "미발견";
    }
    return 0;
}

int Q1()
{
    int arr[8] = { 4, 3, 6, 1, 3, 1, 5 };
    int input = 0;
    std::cin >> input;

    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == input)
        {
            count++;
        }
    }

    std::cout << "숫자" << input << "개수는" << count << "개";
    return 0;
}