
#include <iostream>
// 이차원 배열 파라미터로 넘기는법? 첫 번째 [] 는 왜 [] 로 둬야하나?
// 배열은 파라미터 넘길 때 포인터로 안념겨도 되는 이유??

int main()
{
    return 0;
}

int Q14()
{
    char arr[2][8] = {};
    std::cin >> arr[0];
    std::cin >> arr[1];

    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        if (arr[0][i] == '\0' && arr[1][i] == '\0')
        {
            continue;
        }

        if (arr[0][i] != arr[1][i])
        {
            count++;
        }
    }

    std::cout << count;
    return 0;
}

int Q13()
{
    char a = '0';
    char b = '0';
    std::cin >> a;
    std::cin >> b;

    char* pA = &a;
    char* pB = &b;

    char temp = '0';
    char* pTemp = &temp;
    *pTemp = *pA;
    *pA = *pB;
    *pB = *pTemp;

    std::cout << *pA << " " << *pB;
    return 0;
}

int Q12()
{
    char arr[3][6] =
    {
        "POTIO",
        "ABCDE",
        "YOURE"
    };

    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    for (int i = 0; i < 3; i++)
    {
        for (int j = a; j <= b; j++)
        {
            std::cout << arr[i][j];
        }
    }
    return 0;
}

void sort(char arr[6])
{
    int len = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == '\0')
        {
            break;
        }
        len++;
    }

    // 삽입 정렬로 풀어보자
    for (int i = 1; i < len; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j - 1] <= arr[j])
            {
                break;
            }

            char temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
        }
    }
}

int Q11()
{
    char arr[2][6] =
    {
        "DATAW",
        "BBQK"
    };

    int input = 0;
    std::cin >> input;

    if (input % 2 == 1)
    {
        sort(arr[0]);
    }
    else
    {
        sort(arr[1]);
    }
    return 0;
}

int Q10()
{
    char arr[2][5] = {};
    std::cin >> arr[0];
    std::cin >> arr[1];

    char arr2[12] = {};

    int len1 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[0][i] == '\0')
        {
            break;
        }
        len1++;
    }

    int len2 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[1][i] == '\0')
        {
            break;
        }
        len2++;
    }

    for (int i = 0 ; i < len1; i++)
    {
        arr2[i] = arr[0][i];
    }

    for (int i = 0; i < len2; i++)
    {
        arr2[i + len1] = arr[1][i];
    }

    for (int i = 0; i < len1 + len2; i++)
    {
        std::cout << arr2[i];
    }


    return 0;
}

int Q9()
{
    char arr[4][5] = {};

    for (int i = 0; i < 4; i++)
    {
        std::cin >> arr[i];
    }

    bool existA = false;
    bool existB = false;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == '\0')
            {
                break;
            }

            if (arr[i][j] == 'A')
            {
                existA = true;
            }

            if (arr[i][j] == 'B')
            {
                existB = true;
            }
        }
    }

    if (existA && existB)
    {
        std::cout << "대발견";
    }
    else if (existA || existB)
    {
        std::cout << "중발견";
    }
    else
    {
        std::cout << "미발견";
    }
    return 0;
}

void CountLine(char arr[][10])
{
    for (int i = 0; i < 3; i++)
    {
        int len = 0;
        for (int j = 0; j < 10; j++)
        {
            if (arr[i][j] == '\0')
            {
                break;
            }
            len++;
        }

        std::cout << len << "=";

        for (int j = 0; j < len; j++)
        {
            std::cout << arr[i][j];
        }
        std::cout << "\n";
    }
}

int Q8()
{
    char arr[3][10] = {};
    for (int i = 0; i < 3; i++)
    {
        std::cin >> arr[i];
    }

    CountLine(arr);

    return 0;
}

void Magic(int arr[][3])
{
    int count = 1;

    for (int j = 0; j < 3; j++)
    {
        for (int i = j; i < 3; i++)
        {
            arr[j][i] = count++;
        }
    }
}

void output(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << arr[i][j];
            }
        }
        std::cout << "\n";
    }
}

int Q7()
{
    int arr[3][3] = {};
    Magic(arr);
    output(arr);
    return 0;
}

int Q6()
{
    char vect[3][255] =
    {
        "BBQWORLD",
        "KFCAPPLE",
        "LOT"
    };

    char input = '0';
    std::cin >> input;

    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 255; j++)
        {
            if (vect[i][j] == input)
            {
                count++;
            }
            if (vect[i][j] == '\0')
            {
                break;
            }
        }
    }

    std::cout << count;
    return 0;
}

int findLen(char arr[])
{
    for (int i = 0; i < 255; i++)
    {
        if (arr[i] == '\0')
        {
            return i;
        }
    }

    return -1;
}

int Q5()
{
    char arr[255] = {};
    std::cin >> arr;

    int len = findLen(arr);

    // 버블로 풀어보자
    for (int j = 0; j < len; j++)
    {
        for (int i = j; i < len - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                char temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i];
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

    for (int j = 0; j < 5; j++)
    {
        for (int i = j + 1; i < 6; i++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i];
    }

    return 0;
}

int Q3()
{
    char a = '0';
    std::cin >> a;

    char arr[3][3] = {};

    int i = 2;
    while (i >= 0)
    {
        int j = 0;
        while (j <= 2 - i)
        {
            arr[i][j] = a++;
            j++;
        }
        i--;
    }

    i = 0;
    while (i < 3)
    {
        int j = 0;
        while (j < 3)
        {
            if (arr[i][j] == 0)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << arr[i][j] << " ";
            }
            j++;
        }
        std::cout << "\n";
        i++;
    }
    return 0;
}


int Q2()
{
    int a = 0;
    std::cin >> a;

    int i = 0;
    while (i < 3)
    {
        int j = 0;
        while (j < 5)
        {
            std::cout << a;
            j++;
        }
        std::cout << "\n";
        i++;
    }
    return 0;
}

int Q1()
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    while (a <= b)
    {
        std::cout << a << " ";
        a++;
    }
    return 0;
}
