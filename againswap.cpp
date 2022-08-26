#include<iostream>
#include<conio.h>
using namespace std;

class exchange
{
    int a,b,x;
public:
    void input()
    {
        cout<<" Enter the value of A = ";
        cin>>a;
        cout<<" Enter the value of B = ";
        cin>>b;
    }

    swap (exchange &x)
    {
        x.x=x.a;
        x.a=x.b;
        x.b=x.x;
    }

    void show()
    {
        cout<<" The value of A = "<<a<<endl;
        cout<<" The value of B = "<<b<<endl;
    }



};

int main()
{
    exchange obj;
    obj.input();
    obj.show();
    obj.swap(obj);
    obj.show();


    getch();
}
