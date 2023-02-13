#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum1=0,sum2=0;
        string s;
        cin>>s;
        for(int i=0;i<3;i++)
        {
            int num=s[i]-'0';
            sum1+=num;
        }

        for(int i=3;i<s.size();i++)
        {
            int num=s[i]-'0';
            sum2+=num;
        }
        
        //cout<<"sum1: "<<sum1<<" sum2: "<<sum2<<endl;
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}