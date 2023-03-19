#include<iostream>
#include<conio.h>
#include"includes/get.cpp"
using namespace std;
int main(int l,char* args[])
{
    double total = 0.00;
    for (int i = 1; i < l; i++)
    {
        total+=getDouble(args[i]);
    }
    cout<<total/(l-1);
    return 0;
}