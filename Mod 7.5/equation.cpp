#include<bits/stdc++.h>
using namespace std;

long long func(double x,double y)
{
    double sum = 0;
    for(double i = 2; i<=y; i+=2)
    {
        sum += pow(x,i);
    }
    return sum;
}

int main()
{
    // cout<<pow(5,2)<<endl;
    // cout<<pow(5,4)<<endl;

    int a,b;
    cin>>a>>b;
    cout<<func(a,b)<<endl;

    return 0; 
}