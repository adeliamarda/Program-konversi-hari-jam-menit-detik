#include <iostream>
using namespace std;
int main ()
{
    int jam;
    cout<<"program penghitung upah kerja per jam"<<endl;
    cout<<"masukan jam kerja"<<endl;
    cin>>jam;
    cout<<"masukan upah perjam"<<endl;
    cin>>upah;

    //rumus untuk menghitung upah kerja perjam
    upah=jam*5000;
    cout<<"upah total jam kerja adalah = ";
    return 0;
}

