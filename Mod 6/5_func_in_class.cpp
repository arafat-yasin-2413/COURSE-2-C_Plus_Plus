#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:

    string name;
    int age;
    int marks1;
    int marks2;

    Person(string nm,int ag,int m1,int m2)
    {
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
        

    }


    void hello_func()
    {
        // cout<<"I just print Hello"<<endl;
        cout << name << " "<<age <<endl;
    }

    int total_marks()
    {
        return marks1+marks2 ;
    }
};


int main()
{
    Person rakib("Rakib Ahsan",24,95,85);

    // cout<< rakib.name << " "<<rakib.age<<endl;
    // rakib.hello_func();
    
    cout<< rakib.total_marks()<<endl;
    cout<<rakib.name<<endl;

    return 0; 
}