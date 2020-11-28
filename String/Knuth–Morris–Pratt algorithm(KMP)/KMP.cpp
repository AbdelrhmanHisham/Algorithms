// This Algorithms to find the occurance of pattern in a string a return key value
#include <string>
#include <vector>
#include <iostream>
using namespace std;

/*************************************************/
vector<int> Multi_KMP(string str, string needed);
int KMP(string str, string needed);
vector<int> faliure_fun(string str);
/***************************************************/

int main()
{
    string str{"akjnfajfc"};
    string pattern{"ak"};

    int num = KMP(str, pattern);
    cout << "single key : " << num << endl;

    vector<int> vec = Multi_KMP(str, pattern);

    for (int i = 0; i < vec.size(); i++)
    {
        printf("|%d|", vec[i]);
    }

    return 0;
}

vector<int> faliure_fun(string str)
{
    vector<int> vec(str.size());
    vec[0] = 0;
    int k = 0;
    for (int i = 1; i < str.size(); i++)
    {
        while (k > 0 && str[k] != str[i])
        {
            k = vec[k - 1];
        }
        if (str[k] == str[i])
        {
            vec[i] = ++k;
        }
    }

    return vec;
}

int KMP(string str, string needed)
{

    int n = needed.size();
    if (n < 1)
    {
        return -1;
    }

    vector<int> faliure = faliure_fun(needed);

    int k = 0;
    int key = -1;
    for (int i = 0; i < str.size(); i++)
    {
        while (k > 0 && str[i] != needed[k])
        {
            k = faliure[k - 1];
        }

        if (needed[k] == str[i])
        {
            k++;
        }

        if (k == n)
        {
            key = i - n + 1;
            break;
        }
    }

    return key;
}

vector<int> Multi_KMP(string str, string needed)
{
    int n = needed.size();
    vector<int> keys;
    if (n < 1)
    {
        return keys;
    }

    vector<int> faliure = faliure_fun(needed);

    int k = 0;
    for (int i = 0; i < str.size(); i++)
    {
        while (k > 0 && str[i] != needed[k])
        {
            k = faliure[k - 1];
        }

        if (needed[k] == str[i])
        {
            k++;
        }

        if (k == n)
        {
            keys.push_back(i - n + 1);

            k = faliure[k - 1];
        }
    }

    return keys;
}

