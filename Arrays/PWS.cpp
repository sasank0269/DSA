//Pair wise sum (2 numbers).
//Using hashing.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;

    unordered_set<int> hash_table;

    for (int i = 0; i < n; i++)
    {
        if(hash_table.find(key-arr[i])!=hash_table.end()){
            cout<<"Numbers are: "<<key-arr[i]<<", "<<arr[i]<<endl;
            return 0;
        }
        hash_table.insert(arr[i]);
    }
    return 0;
    
    
}