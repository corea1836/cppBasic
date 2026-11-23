
#include <iostream>

int main()
{
    return 0;
}

int Q11StrLen(char *arr)
{
    int i = 0;
    while (*(arr + i) != '\0')
    {
        i++;
    }

    return i;
}

int Q11()
{
    char arr[5][20] = {};

    for (int i = 0; i < 5; i++)
    {
        std::cin >> arr[i];
    }

    int lens[5] = {};

    int max = INT_MIN;
    int maxIdx = -1;
    for (int i = 0; i < 5; i++)
    {
        int len = Q11StrLen(arr[i]);
        if (max < len)
        {
            max = len;
            maxIdx = i;
        }
    }

    std::cout << arr[maxIdx];
    return 0;
}

int Q10()
{
    char arr[7] = { 'A', 'B', 'C', 'Z', 'E', 'T', 'Q' };

    char blacks[5] = {};
    bool checks[5] = { false };

    for (int i = 0; i < 5; i++)
    {
        std::cin >> blacks[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (*(blacks + i) == *(arr + j))
            {
                *(checks + i) = true;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        std::cout << blacks[i] << "=" << (checks[i] ? "마을사람\n" : "외부사람\n");
    }
    return 0;
}

int Q9()
{
    char arr[10] = {};

    std::cin >> arr;

    for (int i = 1; i < 10; i++)
    {
        if (*(arr + i) == '\0')
            break;
        if (i % 2 == 1)
        {
            if (!('a' <= *(arr + i) && *(arr + i) <= 'z') ||
            !('A' <= *(arr + i - 1) && *(arr + i - 1) <= 'Z'))
            {
                std::cout << "일반문장";
                return 0;
            }
        }
        else
        {
            if (!('A' <= *(arr + i) && *(arr + i) <= 'Z') ||
                !('a' <= *(arr + i - 1) && *(arr + i - 1) <= 'z'))
            {
                std::cout << "일반문장";
                return 0;
            }
        }
    }

    std::cout << "개구리문장";
    return 0;
}

int Q8StrLen(char *arr)
{
    for (int i = 0; i < 10; i++)
    {
        if (*(arr + i) == '\0')
        {
            return i;
        }
    }

    return -1;
}

void Q8Sort(int *arr)
{
    //선택정렬

    for (int j = 0; j < 3; j++)
    {
        for (int i = j; i < 4; i++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int Q8()
{
    char arr[4][10] = {};

    for (int i = 0; i < 4; i++)
    {
        std::cin >> arr[i];
    }

    int vect[4] = {};

    for (int i = 0; i < 4; i++)
    {
        vect[i] = Q8StrLen(arr[i]);
    }

    Q8Sort(vect);

    for (int i = 0; i < 4; i++)
    {
        std::cout << vect[i] << " ";
    }
    return 0;
}

int Q7StrLen(char *arr)
{
    int i = 0;
    while (*(arr + i) != '\0')
    {
        i++;
    }

    return i;
}

int Q7()
{
    char arr1[10] = {};
    char arr2[10] = {};

    std::cin >> arr1;
    std::cin >> arr2;

    int arr1Len = Q7StrLen(arr1);
    int arr2Len = Q7StrLen(arr2);

    if (arr1Len != arr2Len)
    {
        std::cout << "거울문장아님\n";
        return 0;
    }

    for (int i = 0; i < arr1Len; i++)
    {
        if (arr1[i] != arr2[arr2Len - i - 1])
        {
            std::cout << "거울문장아님\n";
            return 0;
        }
    }

    std::cout << "거울문장\n";

    return 0;
}

int Q6()
{
    int arr[6] = {};

    for (int i = 0; i < 6; i++)
    {
        std::cin >> *(arr + i);
    }

    for (int i = 1; i < 6; i++)
    {
        if (*(arr + i - 1) < *(arr + i))
        {
            if (*(arr + i) - *(arr + i - 1) >= 3)
            {
                std::cout << "재배치필요" << std::endl;
                return 0;
            }
        }
        else
        {
            if (*(arr + i - 1) - *(arr + i) >= 3)
            {
                std::cout << "재배치필요" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "완벽한배치" << std::endl;
    return 0;
}

int Q5()
{
    int input = 0;
    std::cin >> input;

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    a = input / 1000;
    input = input % 1000;

    b = input / 100;
    input = input % 100;

    c = input / 10;
    input = input % 10;

    d = input;

    std::cout << "숫자" << a << std::endl;
    std::cout << "숫자" << b << std::endl;
    std::cout << "숫자" << c << std::endl;
    std::cout << "숫자" << d << std::endl;

    return 0;
}

int Q4StrLen(char* arr)
{
    int i = 0;
    while (*(arr + i) != '\0')
    {
        i++;
    }

    return i;
}

int Q4()
{
    char arr1[6] = {};
    char arr2[6] = {};

    std::cin >> arr1;
    std::cin >> arr2;

    int arr1Len = Q4StrLen(arr1);
    int arr2Len = Q4StrLen(arr2);

    if (arr1Len != arr2Len)
    {
        std::cout << "다름\n";
        return 0;
    }

    for (int i = 0; i < arr1Len; i++)
    {
        if (*(arr1 + i) != *(arr2 + i))
        {
            std::cout << "다름\n";
            return 0;
        }
    }

    std::cout << "같음\n";
    return 0;
}

int Q3SortAndGetLen(char *arr)
{
    int i = 0;
    while (*(arr + i) != '\0')
    {
        i++;
    }

    for (int j = 1; j < i; j++)
    {
        for (int k = j; k > 0; k--)
        {
            if (arr[k - 1] < arr[k])
            {
                break;
            }
            char temp = arr[k - 1];
            arr[k - 1] = arr[k];
            arr[k] = temp;
        }
    }

    return i;
}

int Q3()
{
    char arr1[5] = {};
    char arr2[5] = {};

    std::cin >> arr1;
    std::cin >> arr2;

    int arr1len = Q3SortAndGetLen(arr1);
    int arr2len = Q3SortAndGetLen(arr2);

    int len = arr1len + arr2len;

    char result[10] = {};

    for (int i = 0; i < arr1len; i++)
    {
        result[i] = arr1[i];
    }

    for (int i = 0; i < arr2len; i++)
    {
        result[i + arr1len] = arr2[i];
    }

    for (int i = 0; i < len; i++)
    {
        std::cout << result[i];
    }

    return 0;
}

int Q2()
{
    int arr[6] = { 10, 50, 40, 20, 30, 40 };
    int inputs[6] = {};
    int counts[6] = {};

    for (int i = 0; i < 6; i++)
    {
        std::cin >> inputs[i];
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (inputs[i] < arr[j])
            {
                counts[i]++;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << inputs[i] << "=" << counts[i] <<"개\n";
    }
    return 0;
}

int Q1()
{
    int vect[7] = { 3, 5, 1, 1, 2, 3, 2 };
    int inputs[4] = {};
    int counts[4] = {};
    for (int i = 0; i < 4; i++)
    {
        std::cin >> inputs[i];
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (inputs[i] == vect[j])
            {
                counts[i]++;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        std::cout << inputs[i] << "=" << counts[i] << "개\n";
    }

    return 0;
}