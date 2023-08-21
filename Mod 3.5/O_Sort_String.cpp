// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     char a[n];

//     for(int i = 0;i<n;i++) cin >>a[i];

//     sort(a,a+n);

//     for(int i = 0; i<n; i++) cout <<a[i];

//     return 0; 
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;

    int a[26]={0};

    for(int i =0; i<n; i++)
    {
        char ch;
        cin >> ch;

        a[ch-'a']++;
    }

    for(int i = 0; i<26; i++)
    {
        while(a[i] != 0)
        {
            char ch2=i+97;
            cout <<ch2;
            a[i]--;
        }
    }

    return 0; 
}