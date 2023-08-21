#include<bits/stdc++.h>
using namespace std;

int main()
{
    ///////// Capacity /////////

    string s ="Hello World , I need you. ";
    cout<<"size= "<<s.size()<<endl;

    cout<<"max size= "<<s.max_size()<<endl; 
    cout<<"capacity= "<<s.capacity()<<endl;
    string b="uufhakjhnfkabcjhabhiufhabkjabkbassfjhsfhjahjjhkjsgkjs";
    cout<<"capacity of b= "<<b.capacity()<<endl;
    cout<<"length of b= "<<b.size()<<endl<<endl;

    // string c="How are you dear?";
    // cout<<"before clearing: "<<c<<endl;
    // c.clear();
    // cout<<"after clearing: "<<c;
    // cout<<endl;


    string d="I am not empty";
    string e=" ";
    // d.clear();
    if(d.empty() == true) cout<<"Empty"<<endl;
    else cout<<"not empty"<<endl;
    cout<<endl;

 // resizing
    string f ="Hello_world";
    cout<<"f = "<<f<<endl;
    // f.resize(5);
    cout<<"f = "<<f<<endl;
    f.resize(7);
    cout<<"f = "<<f<<endl;
    f.resize(13,'k');
    cout<<"f = "<<f<<endl;  

    cout<<endl;

    f.resize(5);
    cout<<"f = "<<f<<endl;
    f.resize(11,'C');
    cout<<"f = "<<f<<endl;  



    return 0; 
}