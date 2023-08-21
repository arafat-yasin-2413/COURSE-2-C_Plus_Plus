#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;

        int a[26] = {0};

        int sum = 0;

        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (a[ch - 'A'] == 0)
            {
                sum += 2;
                a[ch - 'A']++;
            }

            else
            {
                sum += 1;
                a[ch - 'A']++;
            }
        }

        cout << sum << endl;
    }

    // for(int i =0;i<26;i++)
    // {
    //     if(a[i]>0)
    //     {
    //         char ch2 = i+65;
    //         cout<< ch2 <<"->" <<a[i]<<" "<<endl;
    //     }
    // }

    return 0;
}