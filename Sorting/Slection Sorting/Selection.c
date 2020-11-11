#include <stdlib.h>
#include <stdio.h>

//O(N^2)
//INPLACE
//Blind_Algorithm
//better in small Array

void Selection_Sort(int *arr, int size);
void swap(int *x, int *y);
int main()
{

    int arr[10] = {-10, 100, 2, 3, 5, 89, 0, 1, 8, 0};
    // int arr[10] = {0, 90, 2, 3, 5, 89, 0, 1, 8, 11};
    Selection_Sort(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("|%2d|", arr[i]);
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

// void Selection_Sort(int *arr, int size)
// {
//     int min = arr[0];
//     int dest_index = 0;
//     int target_index = 0;
//     for (int i = 0; i < size; i++)
//     {
//         min = arr[i];
//         for (int j = i; j < size; j++)
//         {

//             if (arr[j] <= min)
//             {
//                 min = arr[j];
//                 dest_index = j;
//             }
//         }
//         target_index = i;
//         if (target_index != dest_index)
//         {
//             swap(&arr[target_index], &arr[dest_index]);
//         }
//     }
// }

void Selection_Sort(int *arr, int size)
{
    int target_index = 0;
    for (int i = 0; i < size; i++)
    {
        int min = arr[i];

        for (int j = i; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                target_index = j;
            }
        }
        if (target_index != i)
        {
            swap(&arr[target_index], &arr[i]);
        }
    }
}