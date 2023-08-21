// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

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

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int res = 0;
        int mn = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                res = a[i] + a[j] + j - i;
                if (res < mn)
                {
                    mn = res;
                }
            }
        }

        cout << mn << endl;
    }
    return 0;
}