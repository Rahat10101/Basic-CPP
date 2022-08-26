#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

class samp
{
    char s[100];
public:
    void show()
    {
        cout<<" Entered String : "<<s<<endl;
    }

    void set(char *str)
    {
        strcpy(s,str);
    }
    samp input()
    {
        char s[100];
        samp str_obj;
        cout<<" Enter the String : ";
        gets(s);
        str_obj.set(s);
        return str_obj;
    }
};

int main()
{
    samp ob;
    ob=ob.input();
    ob.show();

    getch();
}
