#include<iostream>
using namespace std;

class exchange
{
    int a,b;
public:
    void input(int c,int d)
    {
        a=c;
        b=d;
    }

    void swap (exchange &x)
    {
        int t;
        t = x.a;
        x.a=x.b;
        x.b=t;
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
    obj.input(10,20);
    obj.show();
    obj.swap(obj);
    obj.show();

}
