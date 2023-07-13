//Sum of all sub arrays
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    //Prints sum of each sub array
    int curr=0;
    /*for (int i=0; i<n; i++){
        curr=0;
        for (int j=i ; j<n; j++){
            curr+=arr[j];
            cout<<curr<<endl;
        }
    }*/
    //Prints sum of all sub arrays combined
    int total=0;
    for (int i=0; i<n; i++){
        curr=0;
        for (int j=i ; j<n; j++){
            curr+=arr[j];
            total+=curr;
        }
    }
    cout<<total<<endl;

    return 0;
}