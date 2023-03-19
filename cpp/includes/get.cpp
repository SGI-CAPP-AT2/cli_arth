using namespace std;
// Add two elements
int getInt(char c)
{
    char* numList = "0123456789";
    for(int i=0;i<=9;i++)
    {
        if(numList[i]==c)
            return i;
    }
    return 0;
}
double getDouble(string a)
{
    bool dotFound=false;
    double resultbd = 0, resultad=0, admul=0.1;
    for(int i=0;i<a.length();i++)
    {

        if(a[i]=='.'){dotFound=true;continue;}
        if(!dotFound){resultbd=resultbd*10+getInt(a[i]);}
        else if(dotFound){resultad=resultad+(getInt(a[i]))*admul;admul*=0.1;}
    }
    return resultbd+resultad;
}