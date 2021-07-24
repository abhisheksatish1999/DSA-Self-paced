

#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

//Iterative Solution
/*
long int count(int a)
{
    int c=0;
    while(a!=0)
    {
        a=a/10;
        c++;
    }
    return c;
}

int main()
{
    long int num;
    cout<<"Enter a nmber";
    cin>>num;
    long int j;
    j=count(num);
    cout<<"\n Digit="<<j;
    return 0;
}


//Recursive Solution

long int count(int p)
{
    if(p==0)
    return 0;
    return(1+count(p/10));
}

int main()
{
    long int number;
    cout<<"\n enter a number";
    cin>>number;
    int h=count(number);
    cout<<"\n Digits="<<h;
    return 0;
}
*/

// Logarathmic Solution
int main()
{
    long int num=0;
    cout<<"\n Enter a num";
    cin>>num;
    long int tot;
    tot=floor(log10(num)+1);
    cout<<"\n dIGITS="<<tot;
    return 0;
}