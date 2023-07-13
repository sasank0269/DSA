//Maximum circular subarray sum.
#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n){
    int curr_sum=0;
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
    return max_val;

}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Normal kadane algo without considering circular.
    int non_wrap_highest = kadane(arr,n);

    int max_sum=0;
    for (int i = 0; i < n; i++)
    {
        max_sum+=arr[i];
        arr[i]=-arr[i];
    }
    //Considering circular
    int wrap_sum = max_sum + kadane(arr,n);

    cout<<"Maximum Circular sub array sum: "<<max(wrap_sum,non_wrap_highest)<<endl;
    return 0;
    
}