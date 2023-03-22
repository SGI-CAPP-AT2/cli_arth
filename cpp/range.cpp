#include<iostream>
#include<conio.h>
#include"includes/get.cpp"
using namespace std;
int main(int l,char* args[])
{
    try
    {
        double from = getDouble(args[1]), to = getDouble(args[2]), step;
        try
        {
            step = getDouble(args[3]);
        }
        catch(const exception& e)
        {
            step = 1;
        }
        for(double i=from;i<=to;i+=step)
        {
            cout<<i<<" ";
        }
    }
    catch(const exception& e)
    {
        cout<<"Enter valid arguements !";
    }
    return 0;
}