#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a = "hello";
    cout<<a<<endl;
    a="Hi";
    cout<<a<<endl;
    cout<<endl;

    a.assign("Hellow_kacher_manushjon");
    cout<<a<<endl;

    cout<<endl;

    string s;
    s ="HelloWorld";
    cout<<s<<endl;
    s.erase(5,3);
    cout<<s<<endl;

    cout<<endl;
    string c = "HelloWorld";
    // c.replace(4,0,"KAC"); // replace works : erase and replace
    c.insert(5,"KAC<3");
    cout<<c<<endl;
    // replace = erase + replace

    cout<<endl;



    return 0; 
}