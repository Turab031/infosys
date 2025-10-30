#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>basic;
    for(int num : arr){
        for(int a: basic){
            num = min(num,num^a);
            if(num!=0){
                basic.push_back(num);
            }

        }
    }


    int ans = 0;
    for(int i : basic){
        ans = max(ans,i^ans);
    }
    cout<<ans<<endl;
    return 0;
}