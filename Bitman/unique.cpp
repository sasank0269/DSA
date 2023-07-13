//Find unique number in the array
#include<iostream>
using namespace std;

int unique(int arr[], int n){
    int xorsum=0;
    for(int i=0; i<n; i++){
        xorsum=xorsum^arr[i];
    }//xor (0,1) or (1,0) is 1 so same numbers xor will be 0;
    return xorsum;
}

int main(){
    int arr[5]={1,2,3,1,2};
    int ans = unique(arr,5);
    cout<<ans<<endl;
    return 0;
}