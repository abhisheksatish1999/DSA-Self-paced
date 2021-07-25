#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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