#include<bits/stdc++.h>
using namespace std;

void countsort(int arr[],int n){

    int m=0;
    for(int i=0; i<n; i++){
        m=max(m,arr[i]);
    }

    int cnt_arr[m+1]={0};
    for(int i=0; i<n; i++){
        cnt_arr[arr[i]]++;
    }

    for(int i=1; i<m+1; i++){
        cnt_arr[i]=cnt_arr[i]+cnt_arr[i-1];
    }
    int res[n];
    for(int i=0; i<n; i++){
        res[--cnt_arr[arr[i]]]=arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i]=res[i];
    }


}



int main(){
    int arr[8]={1,5,2,5,8,5,3,2};
    countsort(arr,8);

    for(int i=0; i<8; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}