#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    
};


bool cmp(Student a, Student b)
{
    if(a.marks > b.marks) return true; // > descending, < ascending
    else return false;
}

int main()
{
    Student a[3];

    for(int i =0;i<3;i++)
    {
        
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }

// sorting
    sort(a,a+3,cmp);


// printing
    cout<<"Sorting (by marks):"<<endl;
    for(int i =0;i<3;i++)
    {
        
        cout<<a[i].name<<" "<<
        a[i].roll<<" "<<a[i].marks<<endl;
    }
    cout<<endl;




    return 0;
}