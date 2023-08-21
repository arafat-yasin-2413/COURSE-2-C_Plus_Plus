// #include<bits/stdc++.h>
// using namespace std;

// class Student
// {
//     public:
//     char name[100];
//     int cls;
//     char section;
//     int roll;

//     Student (int rl,char sec, int cl, char *n)
//     {
//         roll=rl;
//         strcpy(name,n);
//         cls = cl;
//         section = sec;
//     }
// };

// int main()
// {
//     char nm1[100]="Rahim Chowdhury";
//     // Student rahim(21,'D',9,nm1);
    
//     Student * rh = new Student (21,'D',9,nm1);
//     cout<<rh->name<< endl;
//     cout <<(*rh).name << endl;
    
//     return 0; 
// }



#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    string name;
    float height;
    int age;

    Person (string nm,float hgt, int ag)
    {
        name = nm;
        height = hgt;
        age = ag;
    }
};

int main()
{
    Person * per1= new Person("Abdul Alim",1.9,25);

    cout << per1->name<<" " 
        << per1->height<<" "
        << per1->age<<" "<<endl;
    
    return 0; 
}