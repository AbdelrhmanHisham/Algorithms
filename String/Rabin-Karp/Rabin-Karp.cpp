#include <iostream>
#include <string>
#include <math.h>
using namespace std;

bool check(int index, string str, string pattern);
long hash(string str);
int main()
{
    return 0;
}

bool check(int index, string str, string pattern)
{
    int j = 0;
    for (int i = index; i < (pattern.size() + index); i++)
    {
        if (str[i] != pattern[j])
        {
            return false;
        }
        j++;
    }
    return true;
}


long hash(string str)
{
    long hash_code = 0;

    int n = str.size()-1;
    int j = 0;
    for (int i = n; i >= 0; i--)
    {
        hash_code += (int)str[j]*pow(26,i);
        j++;
    }
    

    return hash_code;
}