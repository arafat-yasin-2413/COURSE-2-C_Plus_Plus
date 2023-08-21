#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int cls;
    char section;
    int roll;

    Student (int rl,char sec, int cl, char *n)
    {
        roll=rl;
        strcpy(name,n);
        cls = cl;
        section = sec;
    }
};

int main()
{
    char nm1[100]="Rahim Chowdhury";
    // Student rahim(21,'D',9,nm1);
    
    Student * rh = new Student (21,'D',9,nm1);
    
    char nm2[100]="Rakib Hasan"; 
    (*rh).roll = 1002; // changing roll
    strcpy((*rh).name,nm2); // changing name

    // cout<< (*rh).name << endl;
    // cout<< (*rh).roll << endl;


    cout << rh->name << endl;

    delete rh;
    cout << rh->name <<endl;

    
    return 0; 
}