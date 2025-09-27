#include <bits/stdc++.h>
using namespace std;

int ans(string s){
    unordered_map<char,int> mp;
    for(char c : s){
        mp[c]++;
    }

    int res = 0;
    for(auto &it : mp){
        res = __gcd(res, it.second);
    }
    return res;
}

int main(){
    string s;
    cin >> s;
    cout << ans(s) << endl;
    return 0;
}
