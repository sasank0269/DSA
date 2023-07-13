#include<bits/stdc++.h>
using namespace std;


int solve(int n, int m, vector<vector<int>> &roads, vector<int> &A){

    vector<int> vis(n+1,0);
    vector<int> adj[n+1];

    for(int i=0; i<m; i++){
        adj[roads[i][0]].push_back(roads[i][1]);
    }
    int res=INT_MAX;
    for(int i=1; i<n+1;i++){
        if(!vis[i]){
            queue<int> q;
            int cnt=A[i-1];
            int temp=A[i-1];
            q.push(i);
            while(!q.empty()){
                int node=q.front();
                q.pop();
                temp=max(temp,A[node]);
                for(auto it:adj[node]){
                    if(!vis[it]){
                        cnt+=A[it-1];
                        vis[it]=1;
                        q.push(it);
                    }
                }
            }
            res=min(res,cnt-temp);
        }
        
    }
    return res;
}

int main(){

    vector<int> A={1,3,5};
    vector<vector<int>> roads={{1,2},{1,3}};
    int ans=solve(3,2,roads,A);
    cout<<ans<<endl;

    return 0;
}