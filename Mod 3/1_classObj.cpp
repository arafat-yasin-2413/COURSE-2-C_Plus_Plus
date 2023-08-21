#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int cls;
    char section;
    int roll;
    


};

int main()
{
    Student hasan;
        char nm1[100]="Hasan Mahmud";
        strcpy(hasan.name,nm1);
        
        hasan.cls = 7;
        hasan.section = 'F';
        hasan.roll = 18;

    Student anisul;
        char nm2[100]="Anisul Hoque";
        strcpy(anisul.name,nm2);

        anisul.cls = 9;
        anisul.section ='A';
        anisul.roll = 43;

    cout << hasan.name<<" "<<hasan.cls<<" "
        << hasan.section<<" "<<hasan.roll<< endl;

    cout << anisul.name<<" "<<anisul.cls<<" "
        << anisul.section<<" "<<anisul.roll<< endl;

        

    return 0; 
}