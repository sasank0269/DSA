#include<bits/stdc++.h>
using namespace std;
int a[100005], seg[4*100005];


void build(int ind, int low, int high){

    if(low==high){
        seg[ind]=a[low];
        return;
    }
    int mid=(low+high)/2;
    build(2*ind+1,low, mid);
    build(2*ind+2,mid+1,high);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}

int query1(int ind, int low, int high, int l, int r){

    if(low>=l && high<=r) return seg[ind];
    if(high<l || low>r) return 0;
    int mid=(low+high)/2;
    int left=query1(2*ind+1,low,mid,l,r);
    int right=query1(2*ind+2,mid+1,high,l,r);
    return left+right;
}

void query2(int ind, int low, int high, int k, int val){
    if(k==low && k==high){
        seg[ind]=val;
        return;
    }
    int mid=(low+high)/2;
    if(mid>=k) query2(2*ind+1,low,mid,k,val);
    else query2(2*ind+2,mid+1,high,k,val);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}


int main(){

    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];

    build(0,0,n-1);

    int q;
    cin>>q;
    while(q--){
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1){
            cout<<query1(0,0,n-1,l,r)<<endl;
        }
        else cout<<query2(0,0,n-1,l,r)<<endl;
    }


    return 0;
}