
#include <iostream>

int Q1()
{
    char arr[15] = {};
    std::cin >> arr;
    char DAT[256] = {};
    for (int i = 0; i < strlen(arr); i++)
    {
        DAT[arr[i]]++;
    }

    int count = 0;
    for (int i = 0; i < 256; i++)
    {
        if (DAT[i] > 0)
        {
            count++;
        }
    }

    std::cout << count << "개\n";
    return 0;
}

int Q2()
{
    int DAT[65535] = {};

    int enterHistory[3][4] =
    {
        { 65000, 35, 42, 70 },
        { 70, 35, 65000, 1300 },
        { 65000, 30000, 38, 42 }
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            DAT[enterHistory[i][j]]++;
        }
    }

    int max = INT_MIN;
    int maxIdx=  0;
    for (int i = 0; i < 65535; i++)
    {
        if (DAT[i] > max)
        {
            max = DAT[i];
            maxIdx = i;
        }
    }

    std::cout << maxIdx;
    return 0;
}

int Q3()
{
    int arr[3][3] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    int DAT[10] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            DAT[arr[i][j]]++;
        }
    }

    for (int i = 1; i < 10; i++)
    {
        if (DAT[i] == 0)
        {
            std::cout << i << " ";
        }
    }
    return 0;
}

char findMostChar(char* arr)
{
    int DAT[256] = {};

    int length = strlen(arr);

    for (int i = 0; i < length; i++)
    {
        DAT[arr[i]]++;
    }

    int max = INT_MIN;
    int maxIdx = 0;
    for (int i = 0; i < 256; i++)
    {
        if (DAT[i] > max)
        {
            max = DAT[i];
            maxIdx = i;
        }
    }

    return (char)maxIdx;
}

int Q4()
{
    char arr[8] = {};
    std::cin >> arr;

    char most = findMostChar(arr);

    std::cout << most << std::endl;
    return 0;
}

int Q5()
{
    char town[3][3] =
    {
        { 'C', 'D', 'A' },
        { 'B', 'M', 'Z' },
        { 'Q', 'P', 'O' }
    };

    char blacks[4] = {};
    std::cin >> blacks;

    int DAT[256] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            DAT[town[i][j]]++;
        }
    }

    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (DAT[blacks[i]] > 0)
        {
            count++;
        }
    }

    std::cout << count << "명\n";
    return 0;
}

int Q6()
{
    char arr[5][3] =
    {
        { 'A', 'B', 'C' },
        { 'A', 'G', 'H' },
        { 'H', 'I', 'J' },
        { 'K', 'A', 'B' },
        { 'A', 'B', 'C' }
    };

    int DAT[256] = {};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            DAT[arr[i][j]]++;
        }
    }

    for (int i = 0; i < 256; i++)
    {
        for (int j = 0; j < DAT[i]; j++)
        {
            std::cout << (char)i ;
        }
    }
    std::cout << "\n";
    return 0;
}

bool isPattern(int* arr, int* team, int idx)
{
    for (int i = 0; i < 3; i++)
    {
        if (team[i] != arr[idx + i])
        {
            return false;
        }
    }

    return true;
}

int Q7()
{
    int train[8] = { 3, 7, 6, 4, 2, 9, 1, 7 };
    int team[3] = {};
    std::cin >> team[0];
    std::cin >> team[1];
    std::cin >> team[2];

    for (int i = 0; i < 8; i++)
    {
        if (isPattern(train, team, i))
        {
            std::cout << i << "번 ~ " << i + 2 << "번 칸\n";
        }
    }
    return 0;
}

int isPatternApt(int apt[5][3], int *family, int dy)
{
    for (int i = 0; i < 3; i++)
    {
        if (family[i] != apt[dy][i])
            return 0;
    }

    return 1;
}

int Q8()
{
    int apt[5][3] =
    {
        { 15, 18, 17 },
        { 4, 6, 9 },
        { 10, 1, 3 },
        { 7, 8, 9 },
        { 15, 2, 6 }
    };

    int family[3] = {};
    std::cin >> family[0];
    std::cin >> family[1];
    std::cin >> family[2];

    for (int y = 0; y < 5; y++)
    {
        if (isPatternApt(apt, family, y))
        {
            std::cout << (5 - y) << "층\n";
        }
    }

    return 0;
}

int Q9()
{
    int arr[3][5] =
    {
        { 1, 3, 3, 5, 1 },
        { 3, 6, 2, 4, 2 },
        { 1, 9, 2, 6, 5 }
    };

    int n = 0;
    std::cin >> n;

    int DAT[256] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            DAT[arr[i][j]]++;
        }
    }

    for (int i = 0; i < 256; i++)
    {
        if (DAT[i] == n)
        {
            std::cout << i << " ";
        }
    }

    std::cout << "\n";
    return 0;
}

void SetCharMember(char* dest, const char* input)
{
    size_t length = strlen(input);
    strncpy(dest, input, length);
    dest[length] = '\0';
}

class Person
{
public:
    Person()
    {
    }

    ~Person()
    {
    }

    void SetName(const char* name)
    {
        SetCharMember(_name, name);
    }

    char* GetName()
    {
        return _name;
    }

    void SetAddress(const char* address)
    {
        SetCharMember(_address, address);
    }

    char* GetAddress()
    {
        return _address;
    }

    void SetPhone(const char* phone)
    {
        SetCharMember(_phone, phone);
    }

    char* GetPhone()
    {
        return _phone;
    }
private:
    char _name[256] = "";
    char _address[256] = "";
    char _phone[256] = "";
};

int Q10()
{
    Person person;
    std::cout << "이름을 입력하세요 :";
    char name[256] = {};
    std::cin >> name;
    person.SetName(name);

    std::cout << "주소를 입력하세요 :";
    char address[256] = {};
    std::cin >> address;
    person.SetAddress(address);

    std::cout << "연락처를 입력하세요 :";
    char phone[256] = {};
    std::cin >> phone;
    person.SetPhone(phone);

    std::cout << "------고객 정보 ------\n";
    std::cout << "이름: " << person.GetName() << "\n";
    std::cout << "주소: " << person.GetAddress() << "\n";
    std::cout << "연락처: " << person.GetPhone() << "\n";
    return 0;
}

int RQ1()
{
    char arr[2][3] =
    {
        { 'G', 'K', 'G' },
        {}
    };

    std::cin >> arr[1][0];
    std::cin >> arr[1][1];
    std::cin >> arr[1][2];

    int DAT[256] = {};

    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            DAT[arr[y][x]]++;
        }
    }

    for (int i = 0; i < 256; i++)
    {
        if (DAT[i] >= 3)
        {
            std::cout << "있음\n";
            return 0;
        }
    }

    std::cout << "없음\n";

    return 0;
}

int RQ2()
{
    int arr[6] = {};

    for (int i = 0; i < 6; i++)
    {
        std::cin >> arr[i];
    }

    int DAT[256] = {};

    for (int i = 0; i < 6; i++)
    {
        if (DAT[arr[i]] > 0)
        {
            std::cout << "도플갱어 발건\n";
            return 0;
        }
        DAT[arr[i]]++;
    }

    std::cout << "미발견\n";

    return 0;
}

int RQ3()
{
    char arr[10] = {};
    std::cin >> arr;

    int DAT[256] = {};
    for (int i = 0; i < strlen(arr); i++)
    {
        DAT[arr[i]]++;
    }

    int max = INT_MIN;
    int maxIdx = 0;
    for (int i = 0; i < 256; i++)
    {
        if (DAT[i] > max)
        {
            max = DAT[i];
            maxIdx = i;
        }
    }

    std::cout << (char)maxIdx << std::endl;
    return 0;
}

int RQ4()
{
    int tooth[2][5] = {};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cin >> tooth[i][j];
        }
    }

    int painCount = 0;
    for (int i = 0; i < 5; i++)
    {
        if (tooth[0][i] == 1 && tooth[1][i])
            painCount++;
    }

    std::cout << painCount << "개\n";
    return 0;
}

int RQ5()
{
    char arr[9] = { 'A', 'T', 'K', 'P', 'T', 'C', 'A', 'B', 'C' };
    char a = '0';
    char b = '0';
    std::cin >> a;
    std::cin >> b;

    int l = 0;
    int r = 8;
    for (l; l < 9; l++)
    {
        if (arr[l] == a)
            break;
    }

    for (r; r >= 0; r--)
    {
        if (arr[r] == b)
            break;
    }

    if (r > l)
    {
        std::cout << r - l << std::endl;
    }
    else
    {
        std::cout << l - r << std::endl;
    }
    return 0;
}

int RQ6()
{
    int win[2][3] =
    {
        { 3, 5, 1 },
        { 4, 2, 6}
    };

    int people[4] = {};
    for (int i = 0; i < 4; i++)
    {
        std::cin >> people[i];
    }

    int DAT[256] = {};

    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            DAT[win[y][x]]++;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (DAT[people[i]] > 0)
        {
            std::cout << people[i] << "번 합격\n";
        }
        else
        {
            std::cout << people[i] << "번 불합격\n";
        }
    }
    return 0;
}

int RQ7()
{
    char vect[6] = { 'C', 'O', 'D', 'I', 'N', 'G' };
    int n = 0;
    std::cin >> n;
    char inputs[256] = {};
    for (int i = 0; i < n; i++)
    {
        std::cin >> inputs[i];
    }

    int DAT[256] = {};
    for (int i = 0; i < 6; i++)
    {
        DAT[vect[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (DAT[inputs[i]] > 0)
        {
            std::cout << "O";
        }
        else
        {
            std::cout << "X";
        }
    }
    std::cout << '\n';

    return 0;
}

int RQ8()
{
    char arr1[256] = {};
    char arr2[256] = {};
    char arr3[256] = {};
    std::cin >> arr1;
    std::cin >> arr2;
    std::cin >> arr3;

    int DAT[256] = {};

    for (int i = 0; i < strlen(arr1); i++)
    {
        DAT[arr1[i]]++;
    }

    for (int i = 0; i < strlen(arr2); i++)
    {
        DAT[arr2[i]]++;
    }

    for (int i = 0; i < strlen(arr3); i++)
    {
        DAT[arr3[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (DAT[i] > 1)
        {
            std::cout << "No\n";
            return 0;
        }
    }

    std::cout << "Perfect\n";
    return 0;
}

int RQ9()
{
    char arr[256] = {};
    std::cin >> arr;

    int DAT[256] = {};
    for (int i = 0; i < strlen(arr); i++)
    {
        DAT[arr[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (DAT[i] > 0)
        {
            std::cout << (char)i;
        }
    }
    return 0;
}

int RQ10()
{
    char arr[10] = {};
    std::cin >> arr;

    int DAT[256] = {};

    for (int i = 0; i < strlen(arr); i++)
    {
        DAT[arr[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (DAT[i] > 0)
        {
            std::cout << (char)i << ":" << DAT[i] << "\n";
        }
    }

    return 0;
}

bool ghostExist(char *arr, int idx)
{
    char find[5] = { 'G', 'H', 'O', 'S', 'T' };
    for (int i = 0; i < 5; i++)
    {
        if (find[i] != arr[idx + i])
            return false;
    }

    return true;
}

int RQ11()
{
    char arr[256] = {};
    std::cin >> arr;

    for (int i = 0; i < strlen(arr) - 5; i++)
    {
        if (ghostExist(arr, i))
        {
            std::cout << "존재\n";
            return 0;
        }
    }

    std::cout << "미존재\n";
    return 0;
}

class Time
{
public:
    Time()
    {
    }

    Time(int hour, int minute, int second)
        : _hour(hour)
        , _minute(minute)
        , _second(second)
    {
    }

    ~Time()
    {
    }

    Time operator+(const Time& rhs)
    {
        int newSecond = 0;
        int newMinute = 0;
        int newHour = 0;

        newSecond += _second;
        newSecond += rhs._second;

        newMinute += newSecond / 60;
        newSecond = newSecond % 60;

        newMinute += _minute;
        newMinute += rhs._minute;

        newHour += newMinute / 60;
        newMinute = newMinute % 60;

        newHour += _hour;
        newHour += rhs._hour;
        newHour = newHour % 24;

        return Time(newHour, newMinute, newSecond);
    }

    void Print()
    {
        std::cout << _hour << "시 " << _minute << "분 " << _second << "초\n";
    }
private:
    int _hour = 0;
    int _minute = 0;
    int _second = 0;
};

int RQ12()
{

    Time time1(4, 50, 40);
    Time time2(3, 40, 30);
    Time time3 = time1 + time2;

    time1.Print();
    time2.Print();
    time3.Print();
    return 0;
}
