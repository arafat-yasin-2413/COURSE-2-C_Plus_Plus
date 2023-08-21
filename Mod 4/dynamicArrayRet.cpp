#include<bits/stdc++.h>
using namespace std;

int *fun()
{
    
    int *a=new int[5]{11,12,13,14,15};
    return a;
}

int main()
{
    // array size was defined by me

    // receiving array from a function
    int *b=fun();
    for(int i = 0;i<5;i++)
    cout<<b[i]<<" ";
    cout<< endl;
    

    return 0; 
}