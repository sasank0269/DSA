//Check palindrome
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    for(int i=0; i<n; i++){
        if(arr[i]!=arr[n-1-i]){
            cout<<"It is not a palindrome!!"<<endl;
            return 0;
        }
    }
    cout<<"It is a palindrome!!"<<endl;
    return 0;
}