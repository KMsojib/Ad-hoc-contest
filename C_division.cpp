#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x;cin>>x;
        if(1900<=x){
            cout<<"Division 1"<<endl;
        }
        if(1600<=x && x<=1899){
            cout<<"Division 2"<<endl;
        }
        if(1400<=x && x<=1599){
            cout<<"Division 3"<<endl;
        }
        if(x<=1399){
            cout<<"Division 4"<<endl;
        }
    }
    return 0;
}
/*
7
-789
1299
1300
1399
1400
1679
2300
output
Division 4
Division 4
Division 4
Division 4
Division 3
Division 2
Division 1
*/
