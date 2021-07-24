#include <cstdio>
#include <iostream>

using namespace std;
//Iterative Solution
/*
long int fact(int k)
{
    long int res=1,i
    if(k==0)
    return 1;
    for(i=1;i<=k;i++)
    {
        res*=i;
    }
    return res;
}

int main()
{
    long int num;
    cout<<"\n eNTER A NUMBER!!";
    cin>>num;
    long int res;
    res=fact(num);
    cout<<"\n Result = "<<res;
    return 0;
}
*/

// Recursive Solution

long int fact(int h)
{
    if(h==0)
    return 1;
    else
    return(h*fact(h-1));
}
int main()
{
    long int num;
    cout<<"\n eNTER A NUMBER!!";
    cin>>num;
    long int res;
    res=fact(num);
    cout<<"\n Result = "<<res;
    return 0;
}