
                          // Balsal is Working good ...

#include <iostream>
using namespace std;

int sum(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n+sum(n-1);
    }
}

int main()
{
    int n,s;
    cout<<" Enter the Range - ";
    cin>>n;
    s=sum(n);
    cout<<" The summation is - "<<s;
    return 0;
}
