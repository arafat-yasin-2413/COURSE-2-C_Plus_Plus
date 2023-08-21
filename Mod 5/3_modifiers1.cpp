#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a ="Hello";
    string b ="World";

    a +=b;
    // this is called operator overloading

    cout<<a<<endl;
    cout<<b<<endl;

    cout<<endl;

    a.append(b);
    cout<<a<<endl;
    cout<<b<<endl;   

    cout<<endl;

    string c ="Hello";
    c.push_back('A');
    cout<<c<<endl;
    c.pop_back();
    cout<<c<<endl;

    return 0; 
}