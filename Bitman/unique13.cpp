//Find unique number in an array where every other number is repeated thrice.
#include<iostream>
using namespace std;
int getBit(int k, int pos){
    return ((k&(1<<pos))!=0);
}
int setBit(int k, int pos){
    return k | 1<<pos;
}
int unique13(int arr[], int n){
    int result=0;
    for(int i=0; i<64; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            if(getBit(arr[j],i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result=setBit(result,i);
        }
    }
    return result;
}

int main(){
    int arr[]={1,1,1,2,2,2,4,5,5,5};
    cout<<unique13(arr,10)<<endl;
    return 0;
}