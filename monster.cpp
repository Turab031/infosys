#include<bits/stdc++.h>
using namespace std;


int main(){
    int nmon,nexp;
    cin>>nmon>>nexp;
    vector<int>power(nmon);
    vector<int>bonus(nmon);
    for(int i =0;i<nmon;i++)cin>>power[i];
    for(int i =0;i<nmon;i++)cin>>bonus[i];

    vector<pair<int,int>>monster;
    for(int i =0;i<nmon;i++){
        monster.push_back({power[i],bonus[i]});

    }

    sort(monster.begin(),monster.end());

    int count = 0;
    for(auto &p:monster){
       int  a = p.first;
       int  b= p.second;
       if(nexp<a)break;
       nexp +=b;
       count++;

    }
    cout<<count<<endl;
    return 0;
}