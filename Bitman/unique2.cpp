//Find 2 unique numbers in an array.
#include<iostream>
using namespace std;
int setBit(int k, int pos){
    return (k & (1<<pos))!=0;
}
void unique2(int arr[],int n){
    int xorsum=0;
    for(int i=0; i<n; i++) xorsum^=arr[i];
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for(int i=0; i<n; i++){
        if(setBit(arr[i],pos-1)){
            newxor^=arr[i];
        }
    }
    cout<<"First number: "<<newxor<<endl;
    int j=tempxor^newxor;
    cout<<"Second number: "<<j;
}

int main(){
    int arr[]={1,2,3,4,1,2};
    unique2(arr,6);
    return 0;
}