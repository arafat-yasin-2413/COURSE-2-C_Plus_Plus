#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    
};

int main()
{
    Student a[3];

    for(int i =0;i<3;i++)
    {
        
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }

// ascending order by marks
    for(int i = 0;i<2; i++)
    {
        for(int j = i; j<3;j++)
        {
            if(a[i].marks > a[j].marks) // just change here (name/roll/marks)
            {
                swap(a[i],a[j]);
            }
        }
    }

// printing ascending order by marks
    cout<<"Ascending Order Sorting (by marks):"<<endl;
    for(int i =0;i<3;i++)
    {
        
        cout<<a[i].name<<" "<<
        a[i].roll<<" "<<a[i].marks<<endl;
    }
    cout<<endl;



// descending order by marks
    for(int i = 0;i<2; i++)
    {
        for(int j = i; j<3;j++)
        {
            if(a[i].marks < a[j].marks) // just change here (name/roll/marks)
            {
                swap(a[i],a[j]);
            }
        }
    }

// printing descending order by marks
    cout<<"Descending Order Sorting (by marks):"<<endl;
    for(int i =0;i<3;i++)
    {
        
        cout<<a[i].name<<" "<<
        a[i].roll<<" "<<a[i].marks<<endl;
    }
    cout<<endl;

    return 0;
}