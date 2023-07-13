#include<bits/stdc++.h>
using namespace std;

bool possibility(int arr[], int mid,int n, int cows){
    int k=cows;
    int sum=arr[0];
    int i=1;
    while(k!=1){
        while(arr[i]-sum<mid){
            i++;
        }
        if(i>=n) return false;
        sum=arr[i];
        i++;
        k--;
    }
    return true;
}

int binsearch(int arr[], int l, int r,int n,int cows){

    if(l<=r){
        int mid=(l+r)/2;
        bool k=possibility(arr,mid,n,cows);

        if(k){
            return max(binsearch(arr,mid+1,r,n,cows),mid);
            
        }
        else{
            return binsearch(arr,l,mid-1,n,cows);
        }
    }
    return 0;
}

int main(){

    int arr[]={1,2,8,4,9};
    int n=5;
    int cows=3;

    sort(arr,arr+n);
    int diff=arr[n-1]-arr[0];
    int res=binsearch(arr,1,diff,n,cows);
    cout<<"ans: "<<res<<endl;
    return 0;
}