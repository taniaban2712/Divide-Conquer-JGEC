#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0,countodd=0,counteve=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a=0;
        cin>>a;
        v.push_back(a);
    }
    for(auto &it:v){
        if(it%2==0){
            counteve++;
        }
        else{
            countodd++;
        }
    }
    cout<<counteve<<" "<<countodd<<endl;
}