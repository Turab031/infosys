#include<bits/stdc++.h>
using namespace std;
int main(){
    int e,n;
    cin>>e>>n;
    vector<int>(a);
    for(int i= 0;i<n;i++){
        cin>>a[i];
    }
    vector<int>ex;
    for(int i =0;i<n;i++){
        ex.push_back(a[i]);
        ex.push_back(a[i]);

    }
    sort(ex.rbegin(),ex.rend());

    int count =0;
    for(int energy : ex){
        e-=energy;
        count++;
        if(e<=0){
            cout<<count<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}