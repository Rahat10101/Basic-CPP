#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class integer
{
    int m;
public:
    integer(int x)
    {
        cout<<" Normal Constructor ... \n";
        m=x;
    }
    integer(integer &x)

    {
        cout<<" Copy Constructor \n";
        m=x.m;
    }
    void show()

    {
        cout<<" The value of M == "<<m<<endl;
    }
};

int main()
{
    integer i1(10);
    integer i2(i1);
    integer i3=i2;

    i1.show();
    i2.show();
    i3.show();

    getch();
}
