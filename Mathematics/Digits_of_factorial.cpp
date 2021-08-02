#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N,i;
    cin>>N;
    double r;
    for(i=2;i<=N;i++)
    r+=log10(i);
    cout<<floor(r+1);
    return(0);
}