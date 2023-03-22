#include<iostream>
#include<conio.h>
#include"includes/get.cpp"
using namespace std;
int main(int l,char* args[])
{
    for (int i = 1; i < l; i++)
    {
        string arg(args[i]);
        for(int i=0;i<arg.length();i++)
        {
            cout<<arg[i]<<"=>"<<getInt(arg[i])<<endl;
        }
    }
    return 0;
}