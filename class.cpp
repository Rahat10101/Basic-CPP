#include<iostream>
#include <ctime>
using namespace std;
class add_class
{
    int dd,mm,yy,day,year,month;
    string nn;
public:

    void message()
    {

cout<<"\n\n\n";
cout<<" +-+-+-+ +-+-+-+-+-+-+-+-+-+-+"<<endl;
cout<<" |a|g|e| |c|a|l|c|u|l|a|t|o|r|"<<endl;
cout<<" +-+-+-+ +-+-+-+-+-+-+-+-+-+-+"<<endl;
cout<<"\n";

    }
    void input()
    {
        cout<<"Nick Name: ";
        cin>>nn;
        cout<<"Day: ";
        cin>>dd;
        cout<<"Month: ";
        cin>>mm;
        cout<<"Year: ";
        cin>>yy;
    }
    void calculate()
    {
        time_t now=time(0);
        tm *ltm = localtime(&now);
        year=(1900+ltm->tm_year)-yy;
        month=(1+ltm->tm_mon)-mm;
        day=(ltm->tm_mday)-dd ;


    }
    void show()
    {
        cout<<endl<<"Hi, "<<nn<<" you are in Earth "<<day<<"days "<<month<<"months  "<<year<<"years\n\n\n\n";
    }
    void work()
    {

        input();
        calculate();
        show();
    }
};
int main()
{
    add_class add;
    add.message();
    add.work();
    return 0;
}
