//Replace pi with 3.14 in string.
#include<iostream>
using namespace std;

void replace(string s){

    if(s.size()==0 || s.size()==1) return;

    if(s.substr(0,2)=="pi") {
        cout<<"3.14";
        replace(s.substr(2));
        
    }
    else{
    cout<<s[0];
    replace(s.substr(1));
    }
}

int main(){

    string s="pippxxppiixipi";
    replace(s);

    return 0;
}