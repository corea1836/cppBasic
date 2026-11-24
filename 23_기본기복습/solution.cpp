
#include <iostream>

void PrintOffsetWord(char arr[3][4], char target, int offsetX, int offsetY)
{
    int targetX = 0;
    int targetY = 0;
    bool find = false;
    for (targetY; targetY < 3; targetY++)
    {
        for (targetX = 0; targetX < 4; targetX++)
        {
            if (arr[targetY][targetX] == target)
            {
                find = true;
                break;
            }
        }

        if (find)
        {
            break;
        }
    }

    targetX += offsetX;
    targetY += offsetY;

    if (0 <= targetY && targetY < 3 && 0 <= targetX && targetX < 4)
    {
        std::cout << arr[targetY][targetX];
    }
}

int Q1()
{
    char arr[3][4] =
    {
        { 'A', 'T', 'K', 'B' },
        { 'C', 'Z', 'F', 'D' },
        { 'H', 'G', 'E', 'I' }
    };

    char target = '0';
    int offsetY = 0;
    int offsetX = 0;
    std::cin >> target;
    std::cin >> offsetY;
    std::cin >> offsetX;

    PrintOffsetWord(arr, target, offsetX, offsetY);

    return 0;
}

int maskingSum(int arr[3][3], int masking[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (masking[i][j] == 1)
            {
                sum += arr[i][j];
            }
        }
    }

    return sum;
}

int Q2()
{
    int arr[3][3] =
    {
        { 3, 5, 9 },
        { 4, 2, 1 },
        { 1, 1, 5 }
    };

    int masking[3][3] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> masking[i][j];
        }
    }

    std::cout << maskingSum(arr, masking);
    return 0;
}

int findOffset(int *arr, int startIdx, int target)
{
    int i = startIdx;
    for (startIdx; startIdx < 8; startIdx++)
    {
        if (arr[startIdx] == target)
        {
            break;
        }
    }

    return startIdx - i;
}

int Q3()
{
    int arr[8] = { 5, 9, 4, 6, 1, 5, 8, 9 };
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    std::cout << findOffset(arr, a, b);
    return 0;
}

void printIsExist(int arr[3][3], int* inputs)
{
    int masking[3] = {};
    for (int i = 0; i < 3; i++)
    {
        int target = inputs[i];
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (arr[j][k] == target)
                {
                    masking[i] = 1;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (masking[i] == 1)
        {
            std::cout << inputs[i] << ": 존재\n";
        }
        else
        {
            std::cout << inputs[i] << ": 미발\n";
        }
    }
}

int Q4()
{
    int arr[3][3] =
    {
        { 3, 5, 9 },
        { 4, 2, 1 },
        { 5, 1, 6 }
    };

    int inputs[3] = {};
    std::cin >> inputs[0];
    std::cin >> inputs[1];
    std::cin >> inputs[2];

    printIsExist(arr, inputs);
    return 0;
}

void findEmpty(int arr1[4][4], int arr2[4][4])
{
    int target[4][4] = {};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i][j] == 1 || arr2[i][j] == 1)
            {
                target[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (target[i][j] == 0)
            {
                std::cout << "(" << i << "," << j << ")\n";
            }
        }
    }
}

int Q5()
{
    int mask1[4][4] =
    {
        { 0, 0, 0, 1 },
        { 1, 1, 0, 1 },
        { 1, 0, 0, 1 },
        { 1, 1, 1, 1 }
    };

    int mask2[4][4] =
    {
        { 1, 1, 1, 1 },
        { 1, 0, 1, 1 },
        { 1, 0, 0, 0 },
        { 1, 0, 0, 0 }
    };

    findEmpty(mask1, mask2);

    return 0;
}

void printMaskNum(int mask[2][5], int arr[2][5], int target)
{
    bool found = false;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mask[i][j] == 1 && (arr[i][j] == target))
            {
                std::cout << target << " 존재\n";
                found = true;
                break;
            }
        }
    }

    if (!found)
        std::cout << target << " 없음\n";
}

int Q6()
{
    int mask[2][5] =
    {
        { 0, 0, 1, 0, 0 },
        { 0, 0, 1, 1, 1 }
    };

    int arr[2][5] =
    {
        { 3, 5, 4, 1, 1 },
        { 3, 5, 2, 5, 6 }
    };

    int input = 0;
    std::cin >>  input;

    printMaskNum(mask, arr, input);

    return 0;
}

void printExistNum(char vect[6], char inputs[4])
{
    int count = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (vect[j] == inputs[i])
            {
                count++;
            }
        }
    }

    std::cout << count << std::endl;
}

int Q7()
{
    char vect[6] = { 'B', 'T', 'K', 'I', 'G', 'Z' };
    char inputs[4] = {};
    std::cin >> inputs[0];
    std::cin >> inputs[1];
    std::cin >> inputs[2];
    std::cin >> inputs[3];

    printExistNum(vect, inputs);
    return 0;
}

void printCount(int vect[3][3], int target[3])
{
    int count[3] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 3; x++)
            {
                if (vect[y][x] == target[i])
                {
                    count[i]++;
                }
            }
        }
    }

    int maxIdx = 0;
    int max = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if (count[i] > max)
        {
            maxIdx = i;
            max = count[i];
        }
    }

    std::cout << target[maxIdx];
}

int Q8()
{
    int vect[3][3] =
    {
        { 3, 7, 4 },
        { 2, 2, 4 },
        { 2, 2, 5 }
    };

    int target[3] = {};
    std::cin >> target[0];
    std::cin >> target[1];
    std::cin >> target[2];

    printCount(vect, target);
    return 0;
}

void isExistUniver(int arr[6], int univer[2][2])
{
    int counts[2][2] = {};

    for (int i = 0; i < 6; i++)
    {
        int a = arr[i];
        for (int y = 0; y < 2; y++)
        {
            for (int x = 0; x < 2; x++)
            {
                if (univer[y][x] == a)
                {
                    counts[y][x] = 1;
                }
            }
        }
    }

    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < 2; x++)
        {
            std::cout << (counts[y][x] == 1 ? "OK " : "NO ");
        }
        std::cout << std::endl;
    }
}

int Q9()
{
    int arr[6] = { 3, 7, 4, 1, 2 ,6 };

    int univer[2][2] = {};
    std::cin >> univer[0][0];
    std::cin >> univer[0][1];
    std::cin >> univer[1][0];
    std::cin >> univer[1][1];

    isExistUniver(arr, univer);

    return 0;
}

void getSum(int arr[11], int index)
{
    if (0 > index || index + 5 >= 11)
    {
        std::cout << "범위를 벗어났습니다.\n";
    }

    int sum = 0;
    for (int i = index; i < index + 5; i++)
    {
        sum += arr[i];
    }

    std::cout << sum << std::endl;
}

int Q10()
{
    int arr[11] = { 3, 4, 1, 1, 2, 6, 8, 7, 8, 9, 10 };

    int startIndex = 0;
    std::cin >> startIndex;

    getSum(arr, startIndex);
    return 0;
}

bool isSame(char* arr1, char* arr2)
{
    int i = 0;
    while (arr1[i] != '\0' && arr2[i] != '\0')
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
        i++;
    }

    if (arr1[i] != arr2[i])
        return false;

    return true;
}

int Q11()
{
    char arr1[256] = {};
    char arr2[256] = {};
    std::cin >> arr1;
    std::cin >> arr2;

    std::cout << (isSame(arr1, arr2)? "동명\n" : "남남\n");
    return 0;
}

static void SetCharMember(char* dest, const char* input)
{
    size_t length = strlen(input);
    strncpy(dest, input, length);
    dest[length] = '\0';
}

struct Class
{
    Class(char *className)
    {
        SetCharMember(_className, className);
    }

    char _className[256] = "";
};

class Player
{
public:
    Player(Class initClass) : _class(initClass)
    {
    }

    ~Player()
    {
    }

    void SetHp(int hp)
    {
        _hp = hp;
    }

    void SetAttackPoint(int attackPoint)
    {
        _attackPoint = attackPoint;
    }

    void Pinrt()
    {
        std::cout << _class._className << " : " << "HP (" << _hp << ") Att(" << _attackPoint << ")\n";
    }

private:
    int _hp = 0;
    int _attackPoint = 0;
    Class _class;
};

class Party
{
public:
    Party()
    {
    }

    ~Party()
    {
    }

    void SetWarrior(Player* warrior)
    {
        _warrior = warrior;
    }

    void SetMagician(Player* magician)
    {
        _magician = magician;
    }

    void SetArcher(Player* archer)
    {
        _archer = archer;
    }

    void Print()
    {
        (*_warrior).Pinrt();
        (*_magician).Pinrt();
        (*_archer).Pinrt();
    }

private:
    Player* _warrior;
    Player* _magician;
    Player* _archer;
};

int Q12()
{
    Class warriorClass("warrior");
    Player warrior(warriorClass);
    warrior.SetHp(100);
    warrior.SetAttackPoint(20);

    Class magicianClass("magician");
    Player magician(magicianClass);
    magician.SetHp(100);
    magician.SetAttackPoint(30);

    Class archerClass("archer");
    Player archer(archerClass);
    archer.SetHp(100);
    archer.SetAttackPoint(10);

    Party party;
    party.SetWarrior(&warrior);
    party.SetMagician(&magician);
    party.SetArcher(&archer);

    party.Print();
    return 0;
}

int RQ1()
{
    int vect[7] = { 3, 5, 4, 2, 6, 6, 5 };
    int mask[7] = {};
    for (int i = 0; i < 7; i++)
    {
        std::cin >> mask[i];
    }

    for (int i = 0; i < 7; i++)
    {
        if (mask[i] == 1)
        {
            mask[i] = vect[i];
        }
    }

    for (int i = 0; i < 7; i++)
    {
        if (mask[i] > 0)
        {
            mask[i] = 7;
        }
    }

    for (int i = 0; i < 7; i++)
    {
        std::cout << mask[i] << " ";
    }
    return 0;
}

bool isSamePassword(int *password, int *input)
{
    for (int i = 0; i < 4; i++)
    {
        if (password[i] != input[i])
        {
            return false;
        }
    }

    return true;
}

int RQ2()
{
    int password[4] = { 3, 7, 4, 9 };
    int input[4] = {};
    for (int i = 0; i < 4; i++)
    {
        std::cin >> input[i];
    }

    bool isSame = isSamePassword(password, input);

    if (isSame)
    {
        std::cout << "pass\n";
    }
    else
    {
        std::cout << "fail\n";
    }

    return 0;
}

int RQ3()
{
    int levelTable[4][2] =
    {
        { 10, 20 },
        { 30, 60 },
        { 100, 150 },
        { 200, 300 }
    };

    int fruitCal[6] = {};
    for (int i = 0; i < 6; i++)
    {
        std::cin >> fruitCal[i];
    }

    int counts[4] = {};

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (levelTable[j][0] <= fruitCal[i] && fruitCal[i] <= levelTable[j][1])
            {
                counts[j]++;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        std::cout << "lev" << i << ":" << counts[i] << "\n";
    }

    return 0;
}

bool isExistColor(int map[2][3], int color)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (map[i][j] == color)
            {
                return true;
            }
        }
    }

    return false;
}

int RQ4()
{
    int map[2][3] =
    {
        { 3, 55, 42},
        {-5, -9, -10}
    };

    int pix[2][2] = {};

    std::cin >> pix[0][0];
    std::cin >> pix[0][1];
    std::cin >> pix[1][0];
    std::cin >> pix[1][1];

    char result[2][2] = {};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (isExistColor(map, pix[i][j]))
            {
                result[i][j] = 'Y';
            }
            else
            {
                result[i][j] = 'N';
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << result[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}

int RQ5()
{
    int arr[6] = {};
    for (int i = 0; i < 6; i++)
    {
        std::cin >> arr[i];
    }

    int masking[6] = { 1, 0, 1, 0, 1, 0 };

    for (int i = 0; i < 6; i++)
    {
        if (masking[i] != 1)
        {
            arr[i] = 0;
        }
    }

    int min = INT_MAX;
    int minIdx = 0;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == 0)
        {
            continue;;
        }

        if (arr[i] < min)
        {
            min = arr[i];
            minIdx = i;
        }
    }

    std::cout << "arr[" << minIdx << "]=" << min << "\n";
    return 0;
}

int RQ6()
{
    int arr[3][3] =
    {
        { 3, 1, 9 },
        { 7, 2, 1 },
        { 1, 0, 8 }
    };

    int masking[3][3] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> masking[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (masking[0][i] == 0)
        {
            arr[0][i] = 0;
        }
    }

    for (int i = 1; i < 3; i++)
    {
        if (masking[0][i] == 0)
        {
            arr[0][i] = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (masking[0][i] > 0)
        {
            std::cout << "발견\n";
            return 0;
        }
    }

    for (int i = 1; i < 3; i++)
    {
        if (masking[0][i] > 0)
        {
            std::cout << "발견\n";
            return 0;
        }
    }

    std::cout << "미발견\n";
    return 0;
}

int maskingSum(int *arr, int *masking)
{
    for (int i = 0; i < 4; i++)
    {
        if (masking[i] == 0)
        {
            arr[i] = 0;
        }
    }

    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int RQ7()
{
    int arr[4] = { 3, 5, 4, 2 };
    int masking[4] = {};
    for (int i = 0; i < 4; i++)
    {
        std::cin >> masking[i];
    }

    std::cout << maskingSum(arr, masking);

    return 0;
}

int RQ8()
{
    char arr[5][5];

    char st = 'A';
    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            arr[y][x] = st++;
        }
    }

    char input = '0';
    std::cin >> input;

    int ty = 0;
    int tx = 0;

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (arr[y][x] == input)
            {
                ty = y;
                tx = x;
                break;
            }
        }
    }

    std::cout << -(2 - ty) << "," << -(2 - tx) << "\n";
    return 0;
}

class Calculator
{
public:
    Calculator()
    {
    }

    ~Calculator()
    {
    }

    int printPlus(int a, int b)
    {
        std::cout << "덧셈: " << a + b << "\n";
    }

    int printMinus(int a, int b)
    {
        std::cout << "뺄셈: " << a - b << "\n";
    }

    int printMultiply(int a, int b)
    {
        std::cout << "곱셈: " << a * b << "\n";
    }

    int printDevide(int a, int b)
    {
        std::cout << "나눗셈: " << a / b << "\n";
        std::cout << "나머지: " << a % b << "\n";
    }
};

int RQ9()
{
    Calculator calculator;
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;

    calculator.printPlus(a, b);
    calculator.printMinus(a, b);
    calculator.printMultiply(a, b);
    calculator.printDevide(a, b);
    return 0;
}