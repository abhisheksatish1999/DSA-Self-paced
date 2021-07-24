#include <iostream>
using namespace std;

double CTOF(int c)
{
    return(c*9/5 + 32);
}

int main()
{
    int c;
    cin>>c;
    cout<<CTOF(c);
    return(0);
}