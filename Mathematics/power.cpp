#include <iostream>
using namespace std;
/*
int power(int x,int y)
{
    if(y==0)
    return(1);
    int temp=power(x,y/2);
    temp=temp*temp;
    if(y%2==0)
    return(temp);
    else
    return(temp*x);
}
int main()
{
    int p,x;
    cin>>p>>x;
    cout<<power(p,x);
    return(0);
}

*/

int power(int x,int y)                              //pow(3,5)  101
{
    int res=1;
    while(y>0)
    {
        if(y%2!=0)
        res*=x;
        x=x*x;
        y=y/2;
    }
    return(res);
}
int main()
{
    int p,x;
    cin>>p>>x;
    cout<<power(p,x);
    return(0);
}