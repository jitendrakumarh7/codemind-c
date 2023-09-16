#include<iostream>

#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    sort(x,x+n);
    for(int i=0;i<n;i++)
    {
        if(x[i]!=x[i+1])
        {
            c+=x[i];
        }
    }
    cout<<c;
    
}