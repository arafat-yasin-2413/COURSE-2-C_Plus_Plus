#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
        int jersey_no;
        char country[40];


};

int main()
{
    char cn1[40]="India";

// normal object
    // Cricketer dhoni;
    //     strcpy(dhoni.country,cn1);
    //     dhoni.jersey_no=18;

// dynamic object for dhoni
    Cricketer *dh=new Cricketer;
        strcpy(dh->country,cn1);
        dh->jersey_no =12;

    cout<< (*dh).country<<endl;
    cout << (*dh).jersey_no <<endl;

// dynamic object for kohli
    Cricketer *kh= new Cricketer;
        strcpy(kh->country,dh->country);
        // kh->country = dh->country;
        kh->jersey_no = dh->jersey_no;

    delete dh;
    cout<< endl;

    cout<< (*dh).country<<endl;
    cout << (*dh).jersey_no <<endl;

    cout << endl;
    cout << (*kh).country<< endl;
    cout << (*kh).jersey_no<< endl;


    return 0; 
}