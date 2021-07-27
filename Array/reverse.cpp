#include <iostream>
using namespace std;
int main()
{
    int n,i,high,low;
    cin>>n;
    int a[100];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    high=n-1;
    low=0;
    for(i=0;i<n;i++)
    {
        while(low<high)
        {
            int temp=a[low];
            a[low]=a[high];
            a[high]=temp;
            low++;
            high--;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return(0);
}