#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.length();
    unordered_map<char,int>mp;

    for(char c:s)mp[c]++;
    int ans = 1;
    for(int k =1;k<=n;k++){
        if(n%k!=0)continue;
        bool can = true;

        for(auto &p : mp){
            if(p.second%k!=0){
                can = false;
                break;
            }
        }
        if(can) ans = k;

    }
    cout<<ans<<endl;
    return 0;
}