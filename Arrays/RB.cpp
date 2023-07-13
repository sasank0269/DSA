//Record breaker
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

    int high=INT_MIN;
    int rb=0;

    for (int i=0; i<n-1; i++){
        if(arr[i]>high){
            high=arr[i];
            if (arr[i]>arr[i+1]){
                rb+=1;
            }
        }
    }
    if (arr[n-1]>high){
        rb+=1;
    }

    cout<<"Number of record breaking days: "<<rb<<endl;

    return 0;
}