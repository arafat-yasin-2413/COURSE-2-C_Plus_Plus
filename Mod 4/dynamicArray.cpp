#include<bits/stdc++.h>
using namespace std;

int * fun()
{
    int * a = new int[6];
    for(int i = 0 ; i<6;i++)
        cin >> a[i];

    return a;
}

int main()
{
    // receiving array a, comment-out to check;
    // int *b = fun();
    // for(int i= 0;i<6;i++)
    //     cout<< b[i]<<" ";


    int *c = new int[6]{1,2,3,4,5,6};
    for(int i = 0;i<6;i++)  cout<<c[i]<<" ";
    cout <<endl;

    int *d= new int[6];
    for(int i = 0; i<6; i++)
        d[i] = c[i];

    delete[] c;
    cout<<"Showing garbage values"<<endl;
    for(int i = 0;i<6;i++)  cout<<c[i]<<" ";
    cout <<endl;

    for(int i = 0;i<6;i++)
        cout<<d[i]<<" ";
        cout<<endl;


    

    return 0; 
}