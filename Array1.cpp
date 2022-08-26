#include<iostream>
using namespace std;
int main ()
{
    int i,n,o,c=0;
    cout<<" Enter the size of the array - ";
    cin>>n;
    int a[n];
    cout<<" Enter the element of the array - "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<" Enter the element "<<i+1<<" - ";
        cin>>a[i];
    }

    cout<<" Enter the element which you want to find - "<<endl;
    cin>>o;
    for(i=0; i<n; i++)
    {
        if(o==a[i])
        {
            c++;
        }
    }

    cout<<o <<" Occur "<<c<<" times in the array . "<<endl;

    return 0;
}

