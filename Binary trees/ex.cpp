#include<bits/stdc++.h>
using namespace std;

bool possible(string a, string b){
    if(abs(a.size()-b.size())>1) return false;
    int mp1[26] = {0}, mp2[26] = {0};
    int n = a.size(), m = b.size();
 
    for(auto &x: a){
      mp1[x-'a'] = 1;
    }
 
    for(auto &x: b){
      mp2[x-'a'] = 1;
    }
 
    int cnt=0;;
 
    for(int i = 0; i < 26; ++i){
      if(mp1[i]^mp2[i])
        cnt++;
    }
    if(cnt>1) return false;
    return true;

}

void recur(vector<string> &arr, int n, int &m, int idx, vector<int> &vis){

    vis[idx]=1;
    int cnt=1;
    for(int i=idx+1;i<n;i++){
        if(possible(arr[idx],arr[i])) {
            cnt++;
            vis[i]=1;
        }
    }
    m=max(m,cnt);
}

void find(vector<string> arr){

    vector<int> vis(arr.size(),0);
    int n=arr.size();
    int groups=0;
    int m=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(!vis[i]){
            groups++;
            recur(arr,n,m,i,vis);
        }
    }
    cout<<m<<" "<<groups;
}

int main(){

    vector<string> arr={"ramu","rama","lisa","tom","hello","hell"};

    find(arr);

    return 0;
}