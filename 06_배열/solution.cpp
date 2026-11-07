
#include <iostream>

int main()
{

    int arr[4] = {};
    std::cin >> arr[0] >> arr[2];

    for (int i = 0; i < 4; i++)
    {
        std::cout << arr[i];
    }
    return 0;
}

int TQ9()
{

    int arr[4] = {};
    std::cin >> arr[0] >> arr[2];

    for (int i = 0; i < 4; i++)
    {
        std::cout << arr[i];
    }
    return 0;
}

int TQ8()
{
    int input;
    std::cin >> input;

    int arr[6] = {};

    for (int i = 0; i < 6; i++)
    {
        arr[i] = input + i;
        std::cout << arr[i] << "\n";
    }

    return 0;
}

int TQ7()
{
    int arr[] = { 5, 7, 1, 8, -4, -73, 4, 2, 20, 84 };
    int index;
    std::cin >> index;

    for (index; index >= 0; index--)
    {
        std::cout << arr[index] << "\n";
    }
    return 0;
}

int TQ6()
{
    int arr[5] = { 3, 9, 12, 15, 55 };
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;

    int sum = a + b + c;

    if (sum > 10)
    {
        std::cout << arr[4];
    }
    else
    {
        std::cout << arr[0];
    }
    return 0;
}

int TQ5()
{
    int arr[7] = {};

    for (int i = 0; i < 7; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << arr[0] + arr[1] + arr[2];

    return 0;
}


int TQ4()
{
    int arr[5] = { 1, 7, 3, 2, 6 };

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i];
    }
    return 0;
}

int TQ3()
{
    int arr[5] = {};
    int input;
    std::cin >> input;

    for (int i = 0; i < 5; i++)
    {
        arr[i] = input;
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i];
    }
    return 0;
}

int TQ2()
{
    int input;
    std::cin >> input;

    if (input != 3)
    {
        std::cout << "3이 아니다\n";
    }

    if (input != 5)
    {
        std::cout << "5가 아니다\n";
    }

    if (1 < input && input < 10)
    {
        for (int i = 5; i >= 1; i--)
        {
            std::cout << i << "\n";
        }
    }
    return 0;
}

int TQ1()
{
    int arr[] = { 3, 2, 6, 7, 1, 8 };
    int input;
    std::cin >> input;

    std::cout << arr[input];
    return 0;
}

int Q12()
{
    int arr[10] = { 5, 25, 54, 2, -33, 57, 82, -8, 13, 1 };
    int input;
    std::cin >> input;

    for (input; input < 10; input++)
    {
        std::cout << arr[input] << "\n";
    }
    return 0;
}

int Q11()
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

    std::cout << sum;

    return 0;
}

int Q10()
{
    int arr[6] = {};
    int input;
    std::cin >> input;

    for (int i = 0; i < 6; i++)
    {
        arr[i] = input - i;
    }

    std::cout << arr[2];
    return 0;
}

int Q9()
{
    int arr[5] = { 5, 2, 3, 4, 7 };

    for (int i = 4; i >= 0; i--)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}

int Q8()
{
    int input;
    std::cin >> input;

    if (input > 5)
    {
        for (int i = 1; i <= 10; i++)
        {
            std::cout << i << "\n";
        }
    }
    else
    {
        for (int i = 5; i >= 1; i--)
        {
            std::cout << i << "\n";
        }
    }
    return 0;
}

int Q7()
{
    int arr[5] = { 3, 9, 26, 81, 243 };
    int input;
    std::cin >> input;

    std::cout << arr[input] - 100;
    return 0;
}

int Q6()
{
    int arr[4] = { 3, 1, 2, 5 };
    int input;

    std::cin >> input;

    if (arr[input] > 2)
    {
        std::cout << "우와";
    }
    else
    {
        std::cout << "ㅠㅠ";
    }
    return 0;
}

int Q5()
{
    int arr[6] = { 3, 4, 1, 6, 7, 5 };
    int a;
    int b;
    std::cin >> a >> b;

    std::cout << arr[a] + arr[b];
    return 0;
}

int Q4()
{
    int arr[5] = {};

    int input;
    std::cin >> input;
    input += 5;

    for (int i = 0; i < 5; i++)
    {
        arr[i] = input;
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}

int Q3()
{
    int arr[7] = {};

    for (int i = 0; i < 7; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << arr[0] + arr[6];

    return 0;
}

int Q2()
{
    int arr[5] = { 4, 1, 3, 6, 9 };
    int input;
    std::cin >> input;

    std::cout << input << "번index의값은" << arr[input] << "입니다";

    return 0;
}

int Q1()
{
    int arr[5] = {};

    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}