#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int cls;
    char section;
    int roll;

    Student(int rl,char sec, int cl, char *n)
    {
        roll = rl;       
        cls  = cl;
        strcpy(name,n);
        section = sec;
    }
};

Student fun()
{
    char nm1[100]="Siam Khan";
    Student si(5,'C',9,nm1);
    return si;
}

int main()
{
    Student siam = fun();

    cout<< siam.name<<endl;
    cout<< siam.cls<<endl;
    cout<< siam.section<<endl;
    cout<< siam.roll<<endl;
    
    

    return 0; 
}