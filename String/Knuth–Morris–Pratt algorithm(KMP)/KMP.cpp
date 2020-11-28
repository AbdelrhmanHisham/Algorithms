// This Algorithms to find the first occurance key value
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int KMP(string str, string needed);
int main()
{
    string str{"dsgwadsgasdzxdsgwadsgz"};
    string needed{"dsgwadsgz"};

    int num = KMP(str, needed);
    return 0;
}

int KMP(string str, string needed)
{
    int n = needed.size();

    int arr[n];

    int i = 0;
    int j = 1;

    arr[i] = 0;
    while (i < n && j < n)
    {

        if (needed[i] != needed[j])
        {
            arr[j] = 0;
            j++;
        }
        else
        {

            i++;
            arr[j] = i;
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("|%d|", arr[i]);
    }
    cout << endl;

    return 0;
}