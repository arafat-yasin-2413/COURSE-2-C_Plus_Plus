// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char sign, equal;

    cin >> a >> sign >> b >> equal >> c;

    // cout << a << " "
    //     << sign <<" "
    //     << b << " "<< equal<< " "<<c;

    if(sign == '+')
    {
        if(a + b == c)
        {
            cout << "Yes"<<endl;
        } 

        else 
            cout << a + b << endl;
    }



    if(sign == '-')
    {
        if(a - b == c)
        {
            cout << "Yes"<<endl;
        } 

        else 
            cout << a - b << endl;
    }


    if(sign == '*')
    {
        if(a * b == c)
        {
            cout << "Yes"<<endl;
        } 

        else 
            cout << a * b << endl;
    }

    return 0; 
}