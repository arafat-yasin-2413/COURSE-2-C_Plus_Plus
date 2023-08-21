#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        string x;
        cin >> s;
        cin >> x;

        int len_of_x = x.length();
        // cout<<len_of_x<<endl;

        while (s.find(x) != -1)
        {
            s.replace(s.find(x), len_of_x, "$");
        }

        cout << s << endl;
    }

    return 0;
}