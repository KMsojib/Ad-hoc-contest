#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        sort(s.begin(),s.end());
        char ch=s.back();
        int Max=ch-'a'+1;
        cout<<Max<<endl;
    }
    return 0;
}
