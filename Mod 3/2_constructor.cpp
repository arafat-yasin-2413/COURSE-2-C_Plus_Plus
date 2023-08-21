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

int main()
{
    Student momen(2,'B',9,"Abdul Momen");

    cout<< momen.name << endl;
    cout<< momen.cls << endl;
    cout<< momen.section << endl;
    cout<< momen.roll << endl;


    

    return 0; 
}