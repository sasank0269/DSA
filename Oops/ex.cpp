#include<bits/stdc++.h>
using namespace std;

int solve(int ind ,vector<int> &arr,int total,  vector<vector<int>> &dp){

    if(total==0) return 1;
    if(ind==0){
        if(total==arr[ind]) return 1;
        return 0;
    }
    if(dp[ind][total]!=-1) return dp[ind][total];
    int notTake = solve(ind-1,arr,total,dp);
    int take = 0;
    if(arr[ind]<=total){
        take = solve(ind-1,arr,total-arr[ind],dp);
    }

    return dp[ind][total] = take|notTake;
}



int main(){

    int testCases;
    cin>>testCases;
    
    vector<string> res;
    while(testCases!=0){
        int n;
        cin>>n;
        int sum=0;
        int k=n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum%2) res.push_back("No");
        else {
            sum=sum/2;
            vector<vector<int>> dp(n,vector<int> (sum+1,-1));
            if(solve(n-1,arr,sum,dp)) res.push_back("Yes");
            else res.push_back("No");
            cout<<solve(n-1,arr,sum,dp)<<endl;
            
        }
        testCases--;
        
    } 
    for(int i=0; i<res.size();i++) cout<<res[i]<<endl;
    
    return 0;
   
}




