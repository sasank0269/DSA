//First repeating element
#include<iostream>
#include<climits>
using namespace std;

int main(){    
    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    const int N=1e6+2;
    int idx[N];

    for (int i=0; i<N; i++){
        idx[i]=-1;
    }

    int min_idx=INT_MAX;
    for (int i=0; i<n; i++){
        if(idx[arr[i]]==-1){
            idx[arr[i]]=i;
        }
        else{
            min_idx = min(idx[arr[i]],min_idx);
        }
    }
    cout<<"Minimum index: "<<min_idx<<endl;

    return 0;
}