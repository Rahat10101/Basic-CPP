#include<iostream>
using namespace std;
int main ()
{
    int i,n,sum=0;
    cout<<" Size of the Array : ";
    cin>>n;
    int a[n];
    cout<<" Taking Input : \n";
    for(i=0; i<n; i++)
    {
        cout<<" Element a["<<i+1<<"] - ";
        cin>>a[i];
        sum=sum+a[i];
    }
    double avg=(float)sum/n;
    cout<<" Sum : "<<sum;
    cout<<" Average  : "<<avg;
    return 0;
}


