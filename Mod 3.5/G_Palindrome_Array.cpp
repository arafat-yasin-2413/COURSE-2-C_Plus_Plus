// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    bool flag = false;

    int i =0;
    int j = n-1;
    while(i<j)
    {
        if(a[i] != a[j])
            flag = true;
        i++;
        j--;
    }


    // cout << flag << endl;
    if(flag == 0) cout <<"YES"<< endl;
    else if (flag == 1) cout << "NO"<< endl;

    return 0; 
}