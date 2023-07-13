//Maximum sub array sum.
//Kadane's algo (Requires atleast one positive input).
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    int curr_sum=0;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int max_val = INT_MIN;
    int max_ele = INT_MIN;
    for (int i=0; i<n; i++){
        if(curr_sum+arr[i]<0){
            curr_sum=0;
        }
        else{
            curr_sum=curr_sum+arr[i];
        }
        max_val=max(max_val,curr_sum);
        max_ele=max(max_ele,arr[i]);
    }
    if(max_val==0){
        max_val=max_ele;
    }
    cout<<"Maximum sub array sum is: "<<max_val<<endl;
    return 0;


}