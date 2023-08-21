#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    int pos = s.find("Ratul");
    // cout<<pos<<endl;
    if(pos != -1)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }

    return 0; 
}