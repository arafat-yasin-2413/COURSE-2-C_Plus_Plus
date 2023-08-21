// Custom Sort using frequency object
#include <bits/stdc++.h>
using namespace std;

class CustomSort
{
public:
    char chr;
    int cnt;
    // আমার ২৬ টা ক্যারেক্টারের অবজেক্ট দরকার

};

bool cmp(CustomSort a,CustomSort b)
{
    if(a.cnt > b.cnt) return true;
    else return false;

}

int main()
{
    int n;
    cin>>n;

    CustomSort a[26];
// initializing with zero
    for(int i=0;i<26;i++)
    {
        a[i].chr = (i+'a');
        a[i].cnt=0;
    }

    // for(int i = 0;i<26;i++)
    // {
    //     cout<<a[i].chr<<" "<<a[i].cnt<<endl;
    // }


    for(int i=0;i<n;i++)
    {
        char c;
        cin >> c;
        a[c-'a'].cnt++;
    }

    sort(a,a+26,cmp);



    for(int i =0;i<26;i++)
    {
        if(a[i].cnt>0)
        {
            // cout<<a[i].chr<<" "<<a[i].cnt<<endl;
            while(a[i].cnt--)
            {
                cout<<a[i].chr;
            }
        }
    }

    return 0;
}