#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    cin>>n;
    list<int>ls;
    /*list is a data structure where we can insert/delete element from both front and back.*/
    for(int i=0;i<n;i++){
        int a=0;
        cin>>a;
        if(a>0){
            ls.push_back(a);
        }
        else{
            ls.push_front(a);
        }
    }
    for(auto it=ls.begin();it!=ls.end();it++){
        cout<<*it<<" ";
    }
    cout<<" "<<endl;
}