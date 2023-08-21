#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // stringstream ss(s);
    // string word;

    // int count = 0;
    // bool is_found = false;

    // // while (ss >> word)
    // // {
    // //     // count++;
    // //     // cout<<word<<endl;
    // // }

    // cout<<count<<endl;



    bool isFound = false;
    int count = 0;
    for(char ch:s)
    {
        // if((ch>='a' and ch<='z')or(ch>='A' and ch<='Z'))
        if(isalpha(ch))
        {
            if(isFound ==false)
            {
                count++;
            }
            isFound=true;
        }

        else 
        {
            isFound= false;
        }
    }

    cout<<count<<endl;

    // cout<<isalpha('a')<<endl; // 2 for small
    // cout<<isalpha('K')<<endl; // 1 for capital
    // cout<<isalpha('.')<<endl; // 0 for symbols

    

    return 0;
}