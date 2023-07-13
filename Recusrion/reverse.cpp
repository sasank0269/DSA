//Reverse a string.
#include<iostream>
using namespace std;

void rever(string s){

    if(s.size()==0) return ;

    rever(s.substr(1));
    cout<<s[0];
}

int main(){

    string s= "binod";
    rever(s);
    return 0;
}