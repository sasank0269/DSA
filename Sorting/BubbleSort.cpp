#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Before sorting: "<<endl;
    for (int i=0; i<n; i++){
        cout<<arr[i];
    }

    cout<<endl<<"After sorting: "<<endl;
    for (int i=n-1; i>=0; i--){
        for (int j=0; j<i; j++){    
            if (arr[j+1]<arr[j]){
                int temp= arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i=0; i<n; i++){
        cout<<arr[i];
    }

    return 0;
}