#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    // https://prnt.sc/5MClP9edo3CY
    int n;
    cin>>n;
    int *a = new int[n];

    for(int i = 0;i<n; i++)
        cin >> a[i];

    int m; cin >> m; int b[m];
    // for(int i = 0; i<m; i++) cin >> b[i];

    for(int i = 0; i<n;i++)
        b[i] = a[i];

    // for(int i = 0; i<n;i++) cout<<b[i]<<" ";

    delete []a;
    // cout<< endl;
    // for(int i = 0; i<n; i++) cout<<a[i]<< " ";
    // cout<<endl;

    for(int i = n;i<m; i++)
    cin >> b[i];

    for(int i = 0;i<m; i++) cout<< b[i]<<" ";
    cout<<endl;



    return 0; 
}