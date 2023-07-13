//Longest arithmetic sub array
//Arithmetic array: Difference between two consecutive numbers in the array should be same.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int pd=arr[1]-arr[0];
    int curr_length=2;
    int max_length=2;

    for (int i=2; i<n; i++){
        if(pd==arr[i]-arr[i-1]){
            curr_length+=1;
            max_length=max(curr_length,max_length);
        }
        else{
            curr_length=2;
            pd = arr[i]-arr[i-1];
        }
    }

    cout<<"Max length: "<<max_length<<endl;
    

    return 0;
}