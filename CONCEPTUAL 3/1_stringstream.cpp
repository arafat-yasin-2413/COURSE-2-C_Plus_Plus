#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="I am yours";
    // stringstream box;
    // box<<s;

    stringstream box(s);
    
    string word ;
    
    while(box>>word)
    {
        cout<<word<<endl;
    }

    

   
    
    

    return 0; 
}