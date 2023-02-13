#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ans=-1;
        map<int,int>tri;
        for(int i=1;i<=n;i++)
        {
            int val;cin>>val;
            tri[val]++;
            if(tri[val]>=3)
            {
                ans=val;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
/* optimal: but not accepted
#include<bits/stdc++.h>
using namespace std;
int i,flg=0;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>a;
        for( i=0;i<n;i++)
        {
            int x;cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        for(i=0;i<n;i++)
        {
            if(a[i]==a[i+1] && a[i]==a[i+2]){
                flg=1;
                break;
            }
            else{
                flg=0;
            }
        }
        if(flg==1){
            cout<<a[i]<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }
    return 0;
}
*/
