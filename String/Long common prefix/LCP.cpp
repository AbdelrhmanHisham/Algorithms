#include <vector>
#include <bits/stdc++.h>
#include <string>
using namespace std;

map<string,int> suffix_array(string str);
void print_table(map<string,int> MAP);
int main()
{
    // vector<string> vec {"#abde","aad","cdsa","zdcvs","bsfd"};

    // sort(vec.begin() , vec.end() , greater<>());
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout<<vec[i]<<endl;
    // }

    suffix_array("AZAZA");
    
    return 0;
}

map<string,int> suffix_array(string str)
{
    map<string,int> suffix;

    for (int i = 0; i < str.size(); i++)
    {
        suffix.insert(pair<string,int> (str.substr(i),i));
    }
    print_table(suffix);
    for (int i = 0; i < str.size(); i++)
    {
        suffix.insert(pair<string,int> (str.substr(i),i));
    }   
    return suffix;

}

void print_table(map<string,int> MAP)
{
    cout<<"Key"<<"    "<<"value"<<endl;
    for (auto it = MAP.begin() ; it != MAP.end(); it++)
    {
        cout<<it->first;
        printf("    %d\n",it->second);
    }


    cout<<"finished!!"<<endl;
    cout<<endl;
    
}   