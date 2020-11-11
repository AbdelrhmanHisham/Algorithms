#include <stdlib.h>
#include <stdio.h>

//O(N^2)
//INPLACE
//NOT_Blind_Algorithm
//better in small Array

void Bubble_Sort(int *arr, int size);
void swap(int *x, int *y);
int main()
{
    int arr[10] = {-50, 100, 2, 3, 5, 89, 0, 1, 8, 11};
    // int arr[10] = {0, 90, 2, 3, 5, 89, 0, 1, 8, 11};
    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    Bubble_Sort(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("|%d|", arr[i]);
    }

    printf("\n");

    return 0;
}
void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}
// void Bubble_Sort(int *arr, int size)
// {

//     int sort = 0;
//     int i = 0;
//     int counter = 0;
//     while (sort != 1)
//     {
//         sort = 1;
//         int j = size - 1;
//         while (j > i)
//         {
//             if (arr[j] < arr[j - 1])
//             {
//                 swap(&arr[j], &arr[j - 1]);
//                 sort = 0;
//             }
//             j--;
//         }
//         i++;
//         counter++;
//     }
// }

void Bubble_Sort(int *arr, int size)
{

    int swapped = 0;
    int stop = 0;
    for (int i = size - 1; i >= 0; )
    {
        int j = i;
        swapped = 0;
        while (j != stop)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(&arr[j], &arr[j - 1]);
                swapped = 1;
                j--;
            }
            else
            {
                j--;
            }
        }
        if (swapped == 0)
        {
            break;
        }

        stop++;
    }
}