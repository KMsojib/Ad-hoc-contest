#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    string str;
    for (int i = 0; i < 50; i++){
        str += "Yes";
    }
    while (t--){
        string s;
        cin >> s;
        if (str.find(s, 0) != -1)///string _ name.find(substring _ name,start _ index);
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
