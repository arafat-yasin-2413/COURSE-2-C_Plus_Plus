// https://prnt.sc/e72vqdJdRGzy
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char *b, int rl, char sec, int marks, int cl)
    {
        strcpy(name, b);
        roll = rl;
        section = sec;
        math_marks = marks;
        cls = cl;
    }
};

int main()
{
    char nm1[100] = "Abdullah Mamum";
    char nm2[100] = "Mynul Islam";
    char nm3[100] = "Prince Asif";
    Student abdullah(nm1, 32, 'D', 99, 9);
    Student mynul(nm2, 37, 'C', 49, 9);
    Student asif(nm3, 39, 'A', 84, 9);

    if (abdullah.math_marks > mynul.math_marks && abdullah.math_marks > asif.math_marks)
    {
        cout << abdullah.name << " has got the highest marks" << endl;
    }

    else if (mynul.math_marks > abdullah.math_marks && mynul.math_marks > asif.math_marks)
    {
        cout << mynul.name << " has got the highest marks" << endl;
    }

    else
    {
        cout << asif.name << " has got the highest marks" << endl;
    }

    return 0;
}