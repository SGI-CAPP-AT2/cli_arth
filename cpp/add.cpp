#include<iostream>
#include<conio.h>
using namespace std;
// Add two elements
int getInt(char c)
{
    string numList = "0123456789";
    for(int i=0;i<=numList.length();i++)
    {
        if(numList[i]==c)
            return i;
    }
    return 0;
}
double getDouble(string a)
{
    bool dotFound=false;
    double resultbd = 0.00, resultad=0.00, admul=0.1;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='.'){dotFound=true;continue;}
        if(!dotFound){resultbd=resultbd*10+getInt(a[i]);}
        else if(dotFound){resultad=resultad+(getInt(a[i]))*admul;admul*=0.1;}
    }
    return resultbd+resultad;
}
int main(int l,char* args[])
{
    double total = 0.00;
    for (int i = 1; i < l; i++)
    {
        total+=getDouble(args[i]);
    }
    cout<<total;
    return 0;
}