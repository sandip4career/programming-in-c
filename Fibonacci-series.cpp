#include<iostream>
using namespace std;

int main()
{
    int num,f0=0,f1=1,f;
    cout<<"Enter a number:";
    cin>>num;

    cout<<f0<<" ";
    for(int i=1;i<num;i++)
    {
        f=f0+f1;
        cout<<f<<" ";
        f0=f1;
        f1=f;
    }
    return 0;
}

//0 1 1 2 3 5 8
