#include<iostream>
#include<conio.h>
#include"includes/get.cpp"
using namespace std;
int main(int l,char* args[])
{
    double min;
    try
    {
        min = getDouble(args[1]);
        for (int i = 1; i < l; i++)
        {
            if(getDouble(args[i])<min)
                min=getDouble(args[i]);
        }
        
        cout<<min;
    }
    catch(const std::exception& e)
    {
        cerr<<"Enter valid operands";
    }
    return 0;
}