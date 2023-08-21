#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    // s.begin(), s.end()
    // cout<<s.begin()<<endl;
    // cout<<s.end()<<endl;
    // these are pointers. not to be shown

    cout<<*s.begin()<<endl;
    cout<<*(s.end()-1)<<endl;
    cout<<"**********************"<<endl<<endl;
    
    string::iterator it;
    for(it = s.begin();it<s.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;
    for(string::iterator it2 =s.begin();
    it2<s.end();it2++)
    {
        cout<<*it2<<" ";
    }

    cout<<endl;
    for(auto it3=s.begin();it3<s.end();it3++)
    {
        cout<<*it3<<" ";
    }

    return 0; 
}