#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>arr(m);
    for(int i =0;i<m;i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    int l =0 ;
    int ans =0;
    for(int r=0;r<m;r++){
        while(r-l+1-k>0)l++;
        int leftbound = (l==0)?1:arr[l-1]+1;
        int rightbount = (r==m-1)?n:arr[r+1]-1;

        ans = max(ans,rightbount-leftbound+1);

    }
    if(m==0)ans = m;
    cout<<ans<<endl;
    return 0;
}