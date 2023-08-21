#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;

};

bool cmp(Student a, Student b)
{
    int total=a.math_marks+a.eng_marks;
    int total2 = b.math_marks+b.eng_marks;

    if(total == total2)
    {
        return a.id < b.id;
    }

    return (a.math_marks+a.eng_marks) > (b.math_marks+b.eng_marks) ;
}

int main()
{
    int n; 
    cin>>n;
    Student arr[n];
    
    for(int i = 0; i<n; i++)
        cin>>arr[i].nm>>arr[i].cls>>arr[i].s>>arr[i].id>>arr[i].math_marks>>arr[i].eng_marks;
    sort(arr,arr+n,cmp);

    for(int i = 0;i<n;i++)
        cout<<arr[i].nm<<" "<<arr[i].cls<<" "<<arr[i].s<<" "<<arr[i].id<<" "<<arr[i].math_marks<<" "<<arr[i].eng_marks<<endl;

    return 0; 
}