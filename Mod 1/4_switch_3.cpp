#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    switch (num % 10)
    {
    case 0:
        cout << "Even" << endl;
        break;

    default:
        cout << "Odd" << endl;
        break;
    }

    return 0;
}