#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Naive Soltn
/*
int main()
{
    int x,y;
    cin>>x>>y;
    int res=0;
    res=min(x,y);
    while(res>0)
    {
        if(x%res==0 && y%res==0)
        break;
        res--;

    }
    cout<<"GCD = "<<res;
    return(0);
}
*/
//Euclidean Soltn

/*
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return(a);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return(0);
}
*/

// Euclidean optimized soltn

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
    cout<<gcd(a,b);
    return(0);
}
