#include <iostream>


void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int arr[6] = { 5, 3, 8, 1, 2, 7 };

    //int arr[6] = { 1, 3, 5, 8, 2, 7 };

    for (int i = 1; i < 6; i++)
    {
        int temp = arr[i];
        int j = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
                break;
        }

        arr[j + 1] = temp;
    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i];
    }

    return 0;
}

// int main()
// {
//     int arr[6] = { 5, 3, 8, 1, 2, 7 };
//
//     //int arr[6] = { 1, 3, 5, 8, 2, 7 };
//
//     /*
//      * Q : 최악의 경우에는 버블소트역순이랑 같은데, 그래도 잘 정렬되어 있으면 앞쪽 인덱스를 볼 필요가 없어서 좋은것인가??
//      * 9 8 7 6 .. 1 이면 버블소트랑 똑같은거 아닌가??
//      */
//     for (int j = 1; j < 6; j++)
//     {
//         for (int i = j; i > 0; i--)
//         {
//             if (arr[i - 1] < arr[i])
//             {
//                 break;
//             }
//
//             int temp = arr[i];
//             arr[i] = arr[i - 1];
//             arr[i - 1] = temp;
//         }
//     }
//
//     for (int i = 0; i < 6; i++)
//     {
//         std::cout << arr[i];
//     }
//     return 0;
// }