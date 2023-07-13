//Remove all duplicates from a string.
#include<iostream>
using namespace std;

string dup(string s){
    string k="";
    if(s.size()==1){
        
        return k+s[0];
    }

    if(s[0]==s[1]){
        return k+dup(s.substr(1));
    }


        return k+s[0]+dup(s.substr(1));
    
}

int main(){

    string s = "aaaabbcddddee";
    string s2=dup(s);
    cout<<s2;
    return 0;
}
