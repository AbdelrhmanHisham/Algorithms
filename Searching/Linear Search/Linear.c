#include <stdlib.h>
#include <stdio.h>


//O(N)

int Linear_Search(int num, int *arr, int size);
int Last_Linear_Search(int num, int *arr, int size);
int main()
{
//    int arr[10] = {-50, 100, 2, 3, 5, 89, 0, 1, 8, 11};
   int arr[6] = {1,2,3,4,4,4};
   printf("Index : %d\n",Last_Linear_Search(4,arr,6));

    return 0;
}

int Linear_Search(int num, int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }

    return -1;
}


int Last_Linear_Search(int num, int *arr, int size)
{
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            index = i;
        }
    }

    return index;
}