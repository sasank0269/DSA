//Find if the array is sorted or not.
#include<iostream>
using namespace std;
bool sorted(int arr[], int n){
    if (n==1) return true;
    return arr[0]<arr[1] && sorted(arr+1,n-1);
}

int main(){
    int arr[5]={1,2,3,6,5};

    cout<<sorted(arr,5)<<endl;
    return 0;
}