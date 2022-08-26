#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
using namespace std;

class A
{
    char name[30];
    int id;
    int age;
    float balance;

public:
    A(char *n,int i,int a)
    {
        strcpy(name,n);
        id=i;
        age=a;
        if(age<=18)
        {
            balance=50.0;
        }
        else
        {
            balance=100.0;
        }

    }

    void add_balance(int amount)
    {
        balance=balance+amount;
        cout<<" \n Added "<<amount<<" Tk successfully \n";
    }
    void show()
    {
        cout<<" Name    : "<<name<<endl;
        cout<<" ID      : "<<id<<endl;
        cout<<" Age     : "<<age<<endl;
        cout<<" Balance : "<<balance<<endl;
        cout<<"---------------------------------------------\n";
    }
};

int main()
{
    A obj1("Mr.ABC",101,23);
    cout<<"\n==== USER 1 ====\n"<<endl;
    cout<<" Initial balance : \n";
    obj1.show();
    obj1.add_balance(100);
    cout<<"\n After adding balance Balance  "<<endl;
    obj1.show();

    A obj2("Mr.XYZ",102,17);
    cout<<"\n==== USER 2 ====\n"<<endl;
    cout<<" Initial balance : \n";
    obj2.show();
    obj2.add_balance(200);
    cout<<"\n After adding balance Balance  "<<endl;
    obj2.show();
    getch();
}

