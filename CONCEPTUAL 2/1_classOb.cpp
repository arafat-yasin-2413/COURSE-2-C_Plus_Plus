#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    char type[20];
    int seat;
    char helper;

    Vehicle(char *veh_type, int seat_num, char help)
    {
        seat = seat_num;
        helper = help;
        // char name[20];
        // strcpy(type, name);
        strcpy(type,veh_type);
    }
};

int main()
{

    Vehicle car("Car", 6, 'N');

    cout << car.type << endl;
    cout << car.seat << endl;
    cout << car.helper << endl;

    return 0;
}