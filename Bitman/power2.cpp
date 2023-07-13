#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    /**
    int i=0;

    while(n>(1<<i)){
        i++;
    }
    if(n==1<<i) cout<<i<<" true"<<endl;
    else cout<<i<<" false"<<endl;
    return 0;**/

    if((n&(n-1))==0) cout<<"true"<<endl;
    else cout<<"false";

}