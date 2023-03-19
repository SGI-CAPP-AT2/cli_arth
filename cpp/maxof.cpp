#include<iostream>
#include<conio.h>
#include"includes/get.cpp"
using namespace std;
int main(int l,char* args[])
{
    double max = 0.00;
    for (int i = 1; i < l; i++)
    {
        if(max<getDouble(args[i]))
            max=getDouble(args[i]);
    }
    cout<<max;
    return 0;
}