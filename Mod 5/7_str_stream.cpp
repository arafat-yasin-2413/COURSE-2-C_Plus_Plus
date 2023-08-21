#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    stringstream s_stream(s);
    string word;
    while(s_stream>>word)
    {
        cout<<word<<endl;
    }

    cout<<endl;
    cout<<"*****************";
    cout<<endl;

    stringstream ss;
    ss<<s;

    string word;
    

    return 0; 
}