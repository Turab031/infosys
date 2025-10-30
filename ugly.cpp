#include<bits/stdc++.h>
using namespace std;
#define mod 100000007;

int main(){
    int n ; 
    string s;

    long long cash,a,b;
    cin>>n>>s>>cash>>a>>b;
    // if flip cheaper
    if(b<=a){
        for(int i =0;i<n&& cash>=b;i++){
            if(s[i]=='1'){
                s[i]=='0';
                cash -=b;
            }
        }
    }
    else{
        int left  = 0;
        int right = n-1;
        while(left<right && cash>=a){
            if(s[left]=='1' && s[right]=='0'){
                swap(s[left],s[right]);
                cash-=a;
                left++;
                right++;
            }
            else{
                if(s[left]=='0')left++;
                if(s[right]=='1')right--;
            }
            // some coins left then flip

            for(int i =0;i<n &&cash>=b;i++){
                if(s[i]=='1'){
                    s[i]='0';
                    cash-=b;
                }
            }
        }
    }
    long long  ans = 0;

    for(char c: s){
        ans =  (ans*2 +(c-'0'))%mod;
    }
    cout<<ans<<endl;
    
    return 0;
}