#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long int num,org=0,rev=0;
    int d=0;
    cout<<"\n Enter a number";
    cin>>num;
    org=num;
    while(num!=0)
    {
        d=num%10;
        rev=rev*10 + d;
        num/=10;
    }
    if(rev==org)
    cout<<"\n Palindromee";
    else
    cout<<"\n Not palindrome";
}