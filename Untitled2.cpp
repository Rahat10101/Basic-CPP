#include<iostream>
using namespace std;
int main()
{
    cout<<"                                       Hello World !!! " <<endl << endl;
    cout<<" Name                  : Mohammad Rahat Akand " <<endl;
    cout<<" Father's Name         : Nasir Uddin          " <<endl;
    cout<<" Mother's Name         : Ruksana Nasir        " <<endl;
    cout<<endl <<endl<<endl <<endl;


    int a=10,b=20;
    cout<< " A = " <<a <<endl;
    cout<< " B = " <<b <<endl;

    cout<<endl <<endl<<endl <<endl;

    int c,d;
    cout<<" Enter the value of C -  " ;
    cin>>c;
    cout<<" Enter the value of D -  " ;
    cin>>d;

    cout<< " C = " <<c <<endl;
    cout<< " D = " <<d <<endl;

    cout<<endl <<endl<<endl <<endl;

    int num1;
    cout<<" Enter a value -  " ;
    cin>>num1;
    if(num1%2==0)
    {
        cout<< " It's a Even number ..." <<endl;
    }

    else
    {
        cout<< " It's a Odd number ..." <<endl;
    }

    cout<<endl <<endl<<endl <<endl;

    cout<< " A = "<<-11%3 <<endl;
    cout<< " B = "<<-11%-3 <<endl;
    cout<< " C = "<<11%3 <<endl;
    cout<< " D = "<<11%-3 <<endl;

    cout<<endl <<endl<<endl <<endl;
    int i,n,sum=0;
    cout<<" Enter the range - ";
    cin >> n;
    for(i=1;i<=n;i=i+4)
    {
        sum=sum+i;
    }
    cout << " Summation is - "<<sum;


    cout<<endl <<endl<<endl <<endl;

    int year;
    cout<< " Input YEAR - ";
    cin>>year;
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        cout << " This is a leap year . ";
    }
    else
    {
        cout << " This is not a leap year . ";
    }

    cout<<endl <<endl<<endl <<endl;

    int q,o,j;
    cout<< " Input - ";
    cin>>q;
    for(o=1;o<=q;o++)
    {
        for(j=1;j<=o;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }


    return 0;
}
