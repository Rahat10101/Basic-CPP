#include<iostream>
using namespace std;
int main ()
{
    int n,i,a,sum=0,c=0,x,rev=0;
    cout<<" Enter any integer Number - ";
    cin>>n;
    x=n;
    for(i=1; n!=0; n=n/10)
    {
        a=n%10;
        rev=rev*10+a;
    }
    cout<<" Reverse of "<<x<<" is "<<rev<<" . "<<endl;
    if (x==rev)
    {
        cout<<x<<" is a Palindrome Number ."<<endl;
    }

    else
    {
        cout<<x<<" is not a Palindrome Number ."<<endl;
    }
    return 0;
}

