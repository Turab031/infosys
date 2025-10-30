#include<bits/stdc++.h>

using namespace std;
int counter(int n,int k){
    if(k==1)return n;
    int count = 0;
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(j%i==0){
                count++;
            }
        }
    }
    return count;
}
int count (int n,int k){
    if(k==1)return n;
    if(k==2)return counter(n,k);
    int mid = k/2;
    int x = count(n,k-mid);
    int y = counter(n,mid);
    return x+y-1;

}
int main(){

    int n,k;
    cin>>n>>k;
    return count(n,k);

    return 0;

}
