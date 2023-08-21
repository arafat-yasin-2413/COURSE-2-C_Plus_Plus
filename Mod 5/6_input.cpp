#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // cin >> s;

    // স্পেস সহ ইনপুট নেয়ার জন্য সি তে ছিলঃ "cin.getline(নাম,সাইজ,stdin)"
    // getline(cin, s);
    // cout << s << endl;
    // cout<<s.size()<<endl;

    cout<<endl;

    string b;
    int x;

    cin>>x;
    // cin>>b;
    // getchar();
    cin.ignore(); 
    getline(cin,b);
    cout<<x<<endl;
    
    cout<<b<<endl;

    return 0;
}