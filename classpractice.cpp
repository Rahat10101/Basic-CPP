#include<iostream>
using namespace std;
class test
{
    int a;
public:
    test(int n)
    {
        a=n;
    }
    void show()
    {
        cout<<" The value of A = "<<a<<endl;
    }
    int sqr(test &t)
    {
        t.a=t.a*t.a;
        return (t.a);
    }

};



int main()
{
    test obj(10);
    obj.show();
    cout<<" SQUARE = "<<obj.sqr(obj)<<endl;
    obj.show();
    return 0;
}
