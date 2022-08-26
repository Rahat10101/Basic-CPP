#include<iostream>
using namespace std;
int main ()
{
    int n,i,a,sum=0,c=0,x,rev=0;
    cout<<" Enter any integer Number - ";
    cin>>n;
    x=n;
    for(i=1;n!=0;n=n/10)
    {
        c++;
        a=n%10;
        rev=rev*10+a;
        sum=sum+a;
    }

    cout<<" Number of "<<x<<" digit is "<<c<<" . "<<endl;
    cout<<" Reverse of "<<x<<" is "<<rev<<" . "<<endl;
    cout<<" Number of "<<x<<" is "<<sum<<" . "<<endl;

    return 0;
}
