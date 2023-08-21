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
    Person * sajedul= new Person("Sajedul Alam",1.57,23);
    Person * bulbul= new Person("Bulbul Islam",1.78,25);


    // cout << sajedul->name<<" "
    //     << sajedul->height<<" "
    //     << sajedul->age<<" "<<endl;

    //     cout << endl;

    // cout << bulbul->name<<" "
    //     << bulbul->height<<" "
    //     << bulbul->age<<" "<<endl;

        cout<<endl;
        if(sajedul->height > bulbul->height)
            cout<< "Sajedul Alam"<<endl;
        else 
            cout<< "Bulbul Islam"<<endl;
   
    return 0;
}
