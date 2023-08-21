#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if(ch >= 'A' and ch <= 'Z')
        cout << "ALPHA\nIS CAPITAL"<<endl;

    else if(ch >= 'a' and ch <= 'z')
        cout << "ALPHA\nIS SMALL"<<endl;
    
    else 
        cout<<"IS DIGIT"<<endl;
    

    return 0; 
}