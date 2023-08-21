#include<bits/stdc++.h>
using namespace std;

namespace Rakib 
{
// namespace is always public.
// ekhane public likhte hoy na
    int age = 24;

    void hello_fun()
    {
        cout<<"Rakib namespace" <<endl;
    }





}


namespace Sakib
{
    int age2 = 30;
    void hello_fun_2()
    {
        cout<<"Sakib namepace"<<endl;
    }


}

using namespace Sakib;
using namespace Rakib;
int main()
{
    // cout<< Rakib::age <<endl;
    // cout<< Sakib::age2 <<endl;

    cout<<age2<<endl;
    cout<<age<<endl;
    

    return 0; 
}