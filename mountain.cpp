#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr){
    int n = arr.size();
    unordered_map<int,int>freq;
    int maxmatxh = 0;
    int mid =(n-1)/2;
    for(int i =0;i<n;i++){
        int peak = arr[i]+abs(i-mid);
        freq[peak]++;
        maxmatxh = max(maxmatxh,freq[peak]);

    }
    return n- maxmatxh;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++)cin>>arr[i];;
    int ans = solve(arr);
    cout<<ans<<endl;
    return 0;

}