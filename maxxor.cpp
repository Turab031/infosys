#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i =0;i<n;i++)cin>>arr[i];

    vector<int>basis;
    for(int x:arr){
        for(int b:basis){
            x= min(x,x^b);

        }
        if(x)basis.push_back(x);

    }

    int ans =0;
    for(int b:basis){
        ans = max(ans,ans^b);
    }
    cout<<ans<<endl;

    return 0;

}