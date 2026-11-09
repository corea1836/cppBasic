
#include <iostream>

// char Q2Arr[3][3] =
// {
//     "ADF",
//     "QWE",
//     "ZXC"
// };

// 주의 포인터 ++ 할때는 (*포인터변수명)++;

// 포인터를 넘기는것과 변수 복사를 넘기는 것의 선택 시점은?

// 파라미터로 배열을 넘기면 복사가 일어나나? 왜 char *a[] 로 넘길 수 없을까?

void findMAX(int arr[][4], int *MAX, int *y, int *x)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] > *MAX)
            {
                *MAX = arr[i][j];
                *y = i;
                *x = j;
            }
        }
    }
}

void findMIN(int arr[][4], int *MIN, int *y, int *x)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] < *MIN)
            {
                *MIN = arr[i][j];
                *y = i;
                *x = j;
            }
        }
    }
}

int Q12()
{
    int arr[4][4] =
    {
        { 3, 4, 1, 6 },
        { 3, 5, 3, 6 },
        { -1, -1, -1, -1 },
        { 5, 4, 6, 0 },
    };

    for (int i = 0; i < 4; i++)
    {
        std::cin >> arr[2][i];
    }

    int MAX = INT_MIN;
    int MAXy = 0;
    int MAXx = 0;
    int MIN = INT_MAX;
    int MINy = 0;
    int MINx = 0;

    findMAX(arr, &MAX, &MAXy, &MAXx);
    findMIN(arr, &MIN, &MINy, &MINx);

    std::cout << "MAX=" << MAX << " (" << MAXy <<  "," << MAXx << ")\n";
    std::cout << "MIN=" << MIN << " (" << MINy <<  "," << MINx << ")";
    return 0;
}

int Q11()
{
    int A[5] = {};
    int B[5] = {};
    int C[5] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int input = 0;
            std::cin >> input;

            if (i == 0)
            {
                A[j] = input;
            }
            else if (i == 1)
            {
                B[j] = input;
            }
            else
            {
                C[j] = input;
            }
        }
    }

    int result[5] = {};

    for (int i = 0; i < 5; i++)
    {
        result[i] = (A[i] * B[i]) + C[i];
        std::cout << result[i] << " ";
    }

    return 0;
}


int Q10()
{
    char dist[2][7] =
    {
        { 'A', 'B', 'C', 'D', 'E', 'F', 'G' },
        { '4', '2', '5', '1', '6', '7', '3' }
    };

    char a = '0';
    char b = '0';
    std::cin >> a;
    std::cin >> b;

    int aIndex = a - 'A';
    int bIndex = b - 'A';

    int stIndex = 0;
    int edIndex = 0;
    if (aIndex > bIndex)
    {
        stIndex = bIndex + 1;
        edIndex = aIndex;
    }
    else
    {
        stIndex = aIndex + 1;
        edIndex = bIndex;
    }

    int count = 0;
    for (stIndex; stIndex < edIndex; stIndex++)
    {
        count += dist[1][stIndex] - '0';
    }

    std::cout << count;
    return 0;
}

char Q9ARR[3][3] =
{
    { 'D', 'A', 'S' },
    { 'Q', 'W', 'V' },
    { 'R', 'T', 'Y' }
};

void Q9Find(int y1, int x1, int y2, int x2, char* a, char* b)
{
    *a = Q9ARR[y1][x1];
    *b = Q9ARR[y2][x2];
}

int Q9()
{
    int y1 = 0;
    int x1 = 0;
    int y2 = 0;
    int x2 = 0;
    std::cin >> y1;
    std::cin >> x1;
    std::cin >> y2;
    std::cin >> x2;

    char result1 = '0';
    char result2 = '0';
    Q9Find(y1, x1, y2, x2, &result1, &result2);

    std::cout << result1 << " " << result2;
    return 0;
}

struct PROFILE
{
    char name[7] = {};
    int age = 0;
    int weight = 0;
};

int calcAvg(int* a, int*b)
{
    return (*a + *b) / 2;
}

int Q8()
{
    PROFILE int1;
    PROFILE int2;

    std::cin >> int1.name;
    std::cin >> int1.age;
    std::cin >> int1.weight;
    std::cin >> int2.name;
    std::cin >> int2.age;
    std::cin >> int2.weight;

    int avgAge = calcAvg(&int1.age, &int2.age);
    int avgWeight = calcAvg(&int1.weight, &int2.weight);

    std::cout << int1.name << " & " << int2.name << "\n";
    std::cout << "평균" << avgAge << "세\n";
    std::cout << "평균" << avgWeight << "KG\n";
    return 0;
}

void FindABC(char a[], char b[], int *countA, int *countB, int *countC)
{
    for (int i = 0; i < 255; i++)
    {
        if (a[i] == '\0')
        {
            break;
        }

        if (a[i] == 'A')
        {
            (*countA)++;
        }
        else if (a[i] == 'B')
        {
            (*countB)++;
        }
        else if (a[i] == 'C')
        {
            (*countC)++;
        }
    }

    for (int i = 0; i < 255; i++)
    {
        if (b[i] == '\0')
        {
            break;
        }

        if (b[i] == 'A')
        {
            (*countA)++;
        }
        else if (b[i] == 'B')
        {
            (*countB)++;
        }
        else if (b[i] == 'C')
        {
            (*countC)++;
        }
    }
}

int Q7()
{
    char a[255] = {};
    char b[255] = {};
    std::cin >> a;
    std::cin >> b;

    int countA = 0;
    int countB = 0;
    int countC = 0;

    FindABC(a, b, &countA, &countB, &countC);

    std::cout << "A:" << countA << "\n";
    std::cout << "B:" << countB << "\n";
    std::cout << "C:" << countC;
    return 0;
}

int Q6()
{
    char arr[2][6] =
    {
        { '4', '5', '7', '1', '3', '2' },
        { 'D', 'F', 'Q', 'W', 'G', 'Z' },
    };

    int input = 0;
    std::cin >> input;

    for (int i = 0; i < 6; i++)
    {
        if (arr[0][i] - '0' == input)
        {
            std::cout << arr[1][i];
        }
    }

    return 0;
}

int Q5Arr[2][6] =
{
    { 4, 5, 6, 1, 3, 1 },
    { 2, 1, 3, 6, 3, 6 }
};

void Q5Input(int *a, int *b, int *c)
{
    std::cin >> *a;
    std::cin >> *b;
    std::cin >> *c;
}

void Q5Process(int *a, int *b, int *c, int *countA, int *countB, int *countC)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (Q5Arr[i][j] == *a)
            {
                (*countA)++;
            }

            if (Q5Arr[i][j] == *b)
            {
                (*countB)++;
            }

            if (Q5Arr[i][j] == *c)
            {
                (*countC)++;
            }
        }
    }
}

void Q5Output(int *a, int *b, int *c, int *countA, int *countB, int *countC)
{
    std::cout << *a << "=" << *countA << "개\n";
    std::cout << *b << "=" << *countB << "개\n";
    std::cout << *c << "=" << *countC << "개\n";
}

int Q5()
{
    int a = 0;
    int b = 0;
    int c = 0;

    Q5Input(&a, &b, &c);

    int countA = 0;
    int countB = 0;
    int countC = 0;
    Q5Process(&a, &b, &c, &countA, &countB, &countC);

    Q5Output(&a, &b, &c, &countA, &countB, &countC);

    return 0;
}

void Q4KFC(int* upperCount, int* lowerCount)
{
    char arr[10] = {};
    std::cin >> arr;

    for (int i = 0; i < 10; i++)
    {
        if ('A' <= arr[i] && arr[i] <= 'Z')
        {
            (*upperCount)++;
        }

        else if ('a' <= arr[i] && arr[i] <= 'z')
        {
            (*lowerCount)++;
        }
    }
}

int Q4()
{
    int upperCount = 0;
    int lowerCount = 0;
    Q4KFC(&upperCount, &lowerCount);

    std::cout << "대문자" << upperCount << "개\n";
    std::cout << "소문자" << lowerCount << "개";
    return 0;
}

int stringLen(char arr[])
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

int Q3()
{
    char arr[255] = {};
    std::cin >> arr;

    int len = stringLen(arr);
    std::cout << len << "글자";
    return 0;
}

void ABC(int a, int b, int *sum, int *gop)
{
    *sum = a + b;
    *gop = a * b;
}

int Q1()
{
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    int sum = 0;
    int gop = 0;

    ABC(a, b, &sum, &gop);

    std::cout << sum << " ";
    std::cout << gop;
    return 0;
}

char Q2Arr[3][3] =
{
    { 'A', 'D', 'F' },
    { 'Q', 'W', 'E' },
    { 'Z', 'X', 'C' },
};

void Find(char* target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Q2Arr[i][j] == *target)
            {
                std::cout << i << "," << j;
                return;
            }
        }
    }
}
int Q2()
{
    char a = '0';
    std::cin >> a;
    Find(&a);

    return 0;
}