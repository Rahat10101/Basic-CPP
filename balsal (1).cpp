#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class A
{
    int m;
public:
    A()
    {
        cout<<" Implement of Constructor ... \n";
        cout<<" WELCOME \n";
        }
            void set()

            {
            cout<<" Enter the value of M - ";
            cin>>m;
        }
            void show()

            {
            cout<<" The value of M == "<<m<<endl;
        }
        };

            int main()
            {
            A obj;
            obj.set();
            obj.show();
            getch();
        }
