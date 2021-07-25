#include <iostream>
using namespace std;
/*
int main()
{
    int a,b;
    cin>>a>>b;
    int res=max(a,b);
    while(1)
    {
        if(res%a==0 && res%b==0)
        {
            cout<<res;
            break;
        }
        res++;
    }
    return(0);
}
*/

//Optimized soltn using euclidean gcd

int gcd(int a,int b)
{
    if(b==0)
    return(a);
    else
    return(gcd(b,a%b));
}
int main()
{
    int a,b;
    cin>>a>>b;
    int g=gcd(a,b);
    int l=(a*b)/g;
    cout<<l;
    return(0);
}