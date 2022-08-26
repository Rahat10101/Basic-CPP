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
    A()
    {
        strcpy(name,"stranger");
        id=0;
        age=21;
        balance=50.0;
    }
    void set(char*n,int i,int a)
    {
        strcpy(name,n);
        id=i;
        age=a;
    }
    void add_balance(int amount)
    {
        balance=balance+amount;
    }
    void show()
    {
        cout<<" Name    : "<<name<<endl;
        cout<<" ID      : "<<id<<endl;
        cout<<" Age     : "<<age<<endl;
        cout<<" Balance : "<<balance<<endl;
    }
};

int main()
{
    A obj;
    cout<<"\n   Default Value  \n"<<endl;
    obj.show();
    obj.set("Mr.ABC",101,23);
    cout<<"\n\n After setting value : "<<endl;
    obj.show();
    obj.add_balance(100);
    cout<<"\n\n After adding balance Balance  "<<endl;
    obj.show();
    getch();
}
