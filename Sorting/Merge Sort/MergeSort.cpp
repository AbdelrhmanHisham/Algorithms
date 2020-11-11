#include <iostream>
#include <vector>
using namespace std;

void merge_sort(vector<int> &vec, int l, int r);
void merge(vector<int> &vec, int l, int m, int r);
int main()
{
    vector<int> vec{-1, 0, -100, 50, 20, 10};

    merge_sort(vec, 0, vec.size() - 1);

    for (int i = 0; i < vec.size(); i++)
    {
        printf("|%d|", vec[i]);
    }

    return 0;
}

void merge_sort(vector<int> &vec, int l, int r)
{
    if (l < r)
    {
        int middle = l + (r - l) / 2;
        // cout << "Middle : " << middle << " L : " << l << " r : " << r << endl;
        merge_sort(vec, l, middle);
        merge_sort(vec, middle + 1, r);
        merge(vec, l, middle, r);
    }
}

void merge(vector<int> &vec, int l, int m, int r)
{
    int l1 = m - l + 1;
    int l2 = r - m;
    vector<int> set_1;
    vector<int> set_2;
    for (int i = 0; i < l1; i++)
    {
        set_1.push_back(vec[l + i]);
    }

    for (int i = 0; i < l2; i++)
    {
        set_2.push_back(vec[m + 1 + i]);
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i < l1 && j < l2)
    {

        if (set_1[i] <= set_2[j])
        {
            vec[k] = set_1[i];
            i++;
            k++;
        }
        else
        {
            vec[k] = set_2[j];
            j++;
            k++;
        }
    }

    while (i < l1)
    {
        vec[k] = set_1[i];
        i++;
        k++;
    }
    while (j < l2)
    {
        vec[k] = set_2[j];
        j++;
        k++;
    }
}
