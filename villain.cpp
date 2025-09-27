#include<bits/stdc++.h>
using namespace std;


bool win(int remove,int m,int h,vector<int>&v){
    int hero= m;
    long long health  =h;
    for(int i = remove;i<v.size();i++){
        int villain = v[i];
        if(health>villain){
            health -=villain;
            

        }
        else if(health==villain){
            // hero die
            hero--;
            // next hero
            if(hero>0)health = h;
            else return false;



        
        }
        else{
            // healt<villain
            hero--;
            if(hero>0)health = h;
            else return false;
            i--;
        }


    }
    return true;

}
int removevillain(int n,int m,int h,vector<int>&v){
    int left =0;
    int right = n;
    int ans= n;
    while(left<=right){
        int mid = left +(right-left)/2;
        if(win(mid,m,h,v)){
            ans =mid;
            right = mid-1;

        }else{
            left = mid-1;
        }

    }
    return ans;
}
int main(){
    // hero
    int n;
    // villain
    int m;
    // health
    int h;
    cin>>n>>m>>h;
    vector<int>v(n);
    for(int i =0;i<n;i++)cin>>v[i];
    cout<<removevillain(n,m,h,v)<<endl;
    return 0;

}