#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    int *a = new int[6]{10, 20, 30, 40, 50, 60};

    return a;
}

int main()
{
    // copying and deleting adjusting size of array
    // receiving array a, comment-out to check;
    int *b = fun();
    for (int i = 0; i < 6; i++)
        cout << b[i] << " ";

    int *c = new int[10]{0};
    for (int i = 0; i < 6; i++)
        c[i] = b[i];

    cout << endl;
    for (int i = 0; i < 10; i++)
        cout << c[i] << " ";

    delete[] b;
    cout << endl;
    cout << "Showing garbage values" << endl;
    for (int i = 0; i < 6; i++)
        cout << b[i] << " ";
    cout << endl;

    for (int i = 0; i < 10; i++)
        cout << c[i] << " ";
    cout << endl;

    return 0;
}
