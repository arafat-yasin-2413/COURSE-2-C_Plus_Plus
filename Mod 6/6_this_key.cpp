#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    string name;
    int age;

    Person(string name, int age)
    {
        (*this).name = name;
        this->age = age;

    }
};

int main()
{
    Person *rakin = new Person("Rakin Absar",24);
    
    Person rakib("Rakib Khan",21);
    cout<<rakib.name<<" "
        << rakib.age<<endl;
    
    // cout<< rakin->name<<" "
    //     << rakin->age<<endl;
    

    return 0; 
}