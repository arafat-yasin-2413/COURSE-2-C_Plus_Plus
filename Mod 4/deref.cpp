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
   
    
    Student * rh = new Student (21,'D',9,nm1);
    
    

    cout<< rh->name<<" "
        << rh->cls<<" "
        << rh->roll<<" "
        << rh->section<<endl;


    
    
    return 0; 
}