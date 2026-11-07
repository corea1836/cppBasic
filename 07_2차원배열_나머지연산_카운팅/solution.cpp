
#include <iostream>

int main()
{

    return 0;
}

int TQ7()
{
    int arr[3][2] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cin >> arr[i][j];
            arr[i][j] += 2;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

int TQ6()
{
    int arr[2][4] = {};

    int y = 0;
    int x = 0;
    std::cin >> y;
    std::cin >> x;

    arr[y][x] = 1;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

int TQ5()
{
    char arr[3] = {};

    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        std::cin >> arr[i];
        if ('A' <= arr[i] && arr[i] <= 'Z')
        {
            count++;
        }
    }

    if (count == 3)
    {
        std::cout << "풍족하다";
    }
    else if (1 <= count && count <= 2)
    {
        std::cout << "적절하다";
    }
    else
    {
        std::cout << "부족하다";
    }

    return 0;
}

int TQ4()
{
    char arr[3][5] = {};

    char input = '0';
    std::cin >> input;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = input++;
        }
    }

    std::cout << static_cast<char>(arr[2][2] - 'A' + 'a');
    return 0;
}

void output3(char a, char b)
{
    if ('A' <= a && a <= 'Z' &&
        'A' <= b && b <= 'Z')
    {
        std::cout << "대문자들";
    }
    else if ('A' <= a && a <= 'Z' ||
            'A' <= b && b <= 'Z')
    {
        std::cout << "대소문자";
    }
    else
    {
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            std::cout << ch;
        }
    }
}

int TQ3()
{
    char a = '0';
    char b = '0';
    std::cin >> a;
    std::cin >> b;

    output3(a, b);
    return 0;
}

int TQ2()
{
    int arr[6] = { 0 };
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    arr[a] = 1;
    arr[b] = 1;
    arr[c] = 1;

    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}

int TQ1()
{
    int input = 0;
    std::cin >> input;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << input;
        }
        std::cout << "\n";
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << input;
        }
        std::cout << "\n";
    }

    return 0;
}

void BBQ(int val)
{
    if (0 < val && val < 5)
    {
        std::cout << "초기값";
    }
    else if (6 < val && val < 10)
    {
        std::cout << "중간값";
    }
    else
    {
        std::cout << "알수없는값";
    }
}

int Q12()
{
    int input = 0;
    std::cin >>  input;

    if (input == 3 || input == 5 || input == 7)
    {
        for (int i = 1; i <= 10; i++)
        {
            std::cout << i;
        }
    }
    else if (input == 0 || input == 8)
    {
        for (int i = 10; i >= 1; i--)
        {
            std::cout << i;
        }
    }
    else
    {
        BBQ(input);
    }
    return 0;
}

int Q11Arr[3][3] = {};

void input2()
{
    int a = 0;
    std::cin >> a;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Q11Arr[i][j] = a++;
        }
    }
}

void output2()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << Q11Arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int Q11()
{
    input2();
    output2();
    return 0;
}

char Q10ARR[4][4] = {};
void input(char val)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            Q10ARR[i][j] = val;
        }
    }
}

void output()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << Q10ARR[i][j];
        }
        std::cout << "\n";
    }
}

int Q10()
{
    char ch = '0';
    std::cin >> ch;

    input(ch);
    output();

    return 0;
}

int Q9()
{
    int arr[5] = {};

    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        std::string result = "";
        if (arr[i] >= 70)
        {
            result = "PASS";
        }
        else if (arr[i] >= 50)
        {
            result = "RETEST";
        }
        else
        {
            result = "FAIL";
        }

        std::cout << i + 1 << "번사람은" << arr[i] << "점" << result << "\n";
    }
    return 0;
}

int Q8()
{
    int arr[3][3] =
    {
        { 3, 4, 1 },
        { 2, 1, 4 },
        { 3, 3, 0 }
    };

    int odd = 0;
    int even = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 == 0 )
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }

    std::cout << "짝수 : " << even << "\n";
    std::cout << "홀수 : " << odd;
    return 0;
}

int Q7()
{
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int MAX = 0;
    int MIN = 0;

    if (a >= b && a >= c)
    {
        MAX = a;
    }
    else if (b >= a && b >= c)
    {
        MAX = b;
    }
    else
    {
        MAX = c;
    }

    if (a <= b && a <= c)
    {
        MIN = a;
    }
    if (b <= a && b <= c)
    {
        MIN = b;
    }
    else
    {
        MIN = c;
    }

    std::cout << "MAX=" << MAX;
    std::cout << "\n";
    std::cout << "MIN=" << MIN;
    return 0;
}

int Q6()
{
    int input;

    for (int i = 0; i < 4; i++)
    {
        std::cin >> input;
        if (input < 20)
        {
            std::cout << "더 큰수를 입력하세요";
        }
        else if (input > 20)
        {
            std::cout << "더 작은수를 입력하세요";
        }
        else
        {
            std::cout << "정답입니다";
        }
    }
    return 0;
}

int Q5()
{
    int input = 0;
    std::cin >> input;

    if (input >= 80)
    {
        std::cout << "수";
    }
    else if (input >= 70)
    {
        std::cout << "우";
    }
    else if (input >= 60)
    {
        std::cout << "미";
    }
    else
    {
        std::cout << "재시도";
    }
    return 0;
}


int Q4()
{
    int arr[5] = {};
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
        if (3 <= arr[i] && arr[i] <= 7)
        {
            count++;
        }
    }

    std::cout << count;

    return 0;
}

int Q3()
{
    int arr[2][3] =
    {
        { 3, 1, 1 },
        { 2, 3, 2 }
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << arr[i][j];
        }
    }
    return 0;
}

int Q2()
{
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    int result = 0;
    if (a > b)
    {
        result = a - b;
    }
    else
    {
        result = b - a;
    }

    if (result % 2 == 1)
    {
        std::cout << "고백한다";
    }
    else
    {
        std::cout << "짝사랑만";
    }
    return 0;
}

int Q1()
{
    int arr[5] = { 3, 5, 2, 4, 1 };
    int vect[3][2] =
    {
        { 9, 8 },
        { 7, 1 },
        { 3, 4 }
    };

    int input;
    std::cin >> input;

    if (input % 2 == 1)
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << arr[i];
        }
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                std::cout << vect[i][j];
            }
            std::cout << "\n";
        }
    }
    return 0;
}