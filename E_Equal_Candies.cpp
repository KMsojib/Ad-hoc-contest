#include<bits/stdc++.h>
using namespace std;
int MIN=INT_MAX;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,eat=0;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            MIN=*min_element(a,a+n);
        }
        for(int i=0;i<n;i++)
        {
            eat+=a[i]-MIN;
        }
        cout<<eat<<endl;
    }
    return 0;
}
