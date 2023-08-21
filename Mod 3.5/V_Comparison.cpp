// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    char ch;
    cin >> a >> ch >> b;
    // cout<< a <<" "<<ch<<" "<<b<<" ";

    if(ch == '>' and a > b)
        cout<< "Right" << endl;

    else if(ch == '<' and a < b)
        cout << "Right" << endl;

    else if (ch == '=' and a == b)
        cout << "Right"<< endl;

    else 
        cout << "Wrong" << endl;

    return 0; 
}