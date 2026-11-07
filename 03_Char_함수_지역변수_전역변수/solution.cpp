#include <iostream>
// char 배열을 생성하고 끝 문자를 안적으면 잘못읽히나? 무조건 끝 문자를 적어야해서 적을 문자크기 + 1로 선언해야하나?
// char 배열을 그대로 cout 하면 string 이랑 똑같은건가?
// 배열에 값을 선언과 동시에 할당할거면 크기는 선언안해도 될까?
// int arr[2] = {}; or {0} 중 뭘로 초기화?
// primitive type 도 초기화 해야하나?


int main()
{
    return 0;
}

int Q1()
{
    char input;
    std::cin >> input;

    for (int i = 0; i < 3; i++)
    {
        std::cout << input;
    }
    return 0;
}

int Q2()
{
    int arr[4] = {};

    for (int i = 0; i < 4; i++)
    {
        std::cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
    }

    std::cout << sum << std::endl;

    return 0;
}

int Q3()
{
    char arr[3] = { 'm', 'i', 'n' };
    int input;
    std::cin >> input;

    std::cout << arr[input];
    return 0;
}

void KFC()
{
    std::cout << "KFC입니다" << std::endl;
}

void MC()
{
    std::cout << "MC입니다" << std::endl;
}

int Q4()
{

    int input;
    std::cin >> input;

    if (input == 1)
    {
        KFC();
    }
    else if (input == 2)
    {
        MC();
    }

    return 0;
}

void LOT()
{
    std::cout << "12345" << std::endl;
}
int Q5()
{
    int input;
    std::cin >> input;

    for (int i = 0; i < input; i++)
    {
        LOT();
    }
    return 0;
}

void KFC2()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "#";
    }
}

void MC2()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "@";
    }
}
int Q6()
{
    KFC2();
    std::cout << std::endl;
    MC2();
    return 0;
}

int Q7()
{
    int arr[6] = {};

    std::cin >> arr[0];
    std::cin >> arr[1];
    std::cin >> arr[2];

    int input;
    std::cin >> input;

    for (int i = 3; i < 6; i++)
    {
        arr[i] = input++;
    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}

int Q8Input;

void KFC3()
{
    std::cin >> Q8Input;
}

void BBQ3()
{
    if (Q8Input > 5)
    {
        std::cout << "만세";
    }
    else
    {
        std::cout << "다시";
    }
}
int Q8()
{
    KFC3();
    BBQ3();
    return 0;
}

char Q9Arr[3] = { 'A', 'B', 'C' };

int Q9()
{
    int input;
    std::cin >> input;

    for (int i = 0; i < input; i++)
    {
        std::cout << Q9Arr << std::endl;
    }

    return 0;
}

int Q10Arr[4] = {};

void input()
{
    for (int i = 0; i < 4; i++)
    {
        std::cin >> Q10Arr[i];
    }
}

void output()
{
    for (int i = 3; i >= 0; i--)
    {
        std::cout << Q10Arr[i];
    }
}
int Q10()
{
    input();
    output();

    return 0;
}

int Q11Arr[6] = {};

void PrintAll()
{
    for (int i = 0; i < 6; i++)
    {
        std::cout << Q11Arr[i] << std::endl;
    }
}

int Q11()
{
    int input;
    std::cin >> input;

    for (int i = 0; i < 6; i++)
    {
        Q11Arr[i] = input + i;
    }

    PrintAll();

    return 0;
}

void QTR()
{
    std::cout << "QTR100%";
}

void BBQ()
{
    std::cout << "BBQ100%";
}
int Q12()
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

    if (sum >= 10)
    {
        QTR();
    }
    else
    {
        BBQ();
    }

    return 0;
}

int Q13()
{
    int arr[11] = { 3, 4, 1, 5, 8, 1, 7, 7, 3, 6, 9 };

    int input;
    std::cin >> input;

    for (int i = 0; i < 11; i += input)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}

void ljjcoding()
{
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    std::cout << "(" << a << ")" << "(" << b << ")";
}

int RQ1()
{
    ljjcoding();
    return 0;
}

void KFC4()
{
    std::cout << "KFC";
}

void BBQ4()
{
    std::cout << "BBQ";
}

int RQ2()
{
    char input;
    std::cin >> input;

    if (input == 'B')
    {
        KFC4();
        std::cout << std::endl;
        BBQ4();
    }
    else if (input == 'b')
    {
        BBQ4();
    }
    else if (input == '7')
    {
        KFC4();
    }
    return 0;
}

int RQ3Arr1[5] = {};
int RQ3Arr2[5] = {};

void PrintALl()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << RQ3Arr1[i];
    }
    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << RQ3Arr2[i];
    }
}
int RQ3()
{
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    for (int i = 0 ; i < 5; i++)
    {
        RQ3Arr1[i] = a;
        RQ3Arr2[i] = b;
    }

    PrintALl();
    return 0;
}

int RQ3Arr[5] = {};

void KFC5()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << RQ3Arr[i];
    }
}

int RQ4()
{
    int input;
    std::cin >> input;

    for (int i = 0; i < 5; i++)
    {
        RQ3Arr[i] = input - i;
    }

    KFC5();
    return 0;
}

int RQ5Arr[5] = { 4, 1, 2, 3, 5 };

int RQ5()
{
    char input;
    std::cin >> input;

    if (input == 'a' || input == 'b' || input == 'c')
    {
        for (int i = 3; i >= 0; i--)
        {
            std::cout << RQ5Arr[i] << " ";
        }
    }
    else
    {
        for (int i = 4; i >= 1; i--)
        {
            std::cout << RQ5Arr[i] << " ";
        }
    }
    return 0;
}

int RQ6()
{
    int arr[] = { 3, 5, 1, 2, 4, 6, 7 };
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    for (a; a <= b; a++)
    {
        std::cout << arr[a] << " ";
    }
    return 0;
}

int RQ7()
{
    int data[4];
    int input;
    std::cin >> input;

    for (int i = 0; i < 4; i++)
    {
        data[i] = input - i;
    }

    for (int i = 0; i < 4; i++)
    {
        std::cout << data[i] << " ";
    }
    return 0;
}

int RQ8()
{
    int arr[6] = {};
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    for (int i = 0; i < 3; i++)
    {
        arr[i] = a + i;

        // 다른 for 문으로 돌리다가 규칙성이 발견되어 합침
        arr[5 - i] = b - i;
    }

    return 0;
}

int RQ9()
{
    int arr[5] = {};
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;

    for (int i = 0; i < 5; i++)
    {
        arr[i] = a + (b * i);
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}

int RQ10()
{
    int arr[6] = {};

    int input;
    std::cin >> input;

    for (int i = 0; i < 6; i++)
    {
        arr[i] = input + (input * i);
    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}

int RQ11()
{
    int arr[6] = {};

    std::cin >> arr[0];
    std::cin >> arr[1];
    std::cin >> arr[2];

    int input;
    std::cin >> input;

    for (int i = 0; i < 3; i++)
    {
        arr[i + 3] = input + i;
    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}

int RQ12()
{
    int arr[5] = {};

    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    std::cout << "합은 " << sum << "입니다";
    return 0;
}

int RQ13()
{
    int arr[] = { 3, 4, 1, 5, 8, 1, 7, 7, 3, 6, 9 };
    int input = 0;
    std::cin >> input;

    for (int i = 0; i < 11; i += input)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}

int RQ14()
{
    int arr[6] = {};
    int a;
    int b;

    std::cin >> a;
    std::cin >> b;

    int t = b - a;
    for (int i = 0; i <= t; i++)
    {
        arr[i] = a + i;
    }

    for (int i = 0; i <= t; i++)
    {
        std::cout << arr[i];
    }
    return 0;
}