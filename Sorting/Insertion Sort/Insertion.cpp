#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &vec);
void print_vec(vector<int> vec);
int main()
{
    vector<int> vec{100, 10, 1, 0};
    insertion_sort(vec);
    print_vec(vec);
    return 0;
}

void insertion_sort(vector<int> &vec)
{
    int key, compared;
    if (vec[0] > vec[1])
        swap(vec[0], vec[1]);

    for (int i = 2; i < vec.size(); i++)
    {
        key = vec[i];
        compared = i - 1;
        while (key < vec[compared])
        {

            swap(vec[compared + 1], vec[compared]);
            key = vec[compared];
            compared--;
        }
    }
}

void print_vec(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        printf("|%2d|", vec[i]);
    }
    printf("\n");
}