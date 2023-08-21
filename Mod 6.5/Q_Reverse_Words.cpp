#include<bits/stdc++.h>
using namespace std;

void ReverseWord(stringstream &ss)
{

}

int main()
{
    string s;
    getline(cin,s);

    stringstream box(s);

    string word;

    box>>word;  
    reverse(word.begin(),word.end());
    cout<<word;

    while(box>>word)
    {
        // cout<< word<<endl;
        reverse(word.begin(),word.end());
        cout<<" "<<word;
        
    }
   
    return 0; 
}