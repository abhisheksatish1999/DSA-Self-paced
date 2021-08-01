#include <iostream>
using namespace std;
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