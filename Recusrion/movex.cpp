//Move all x to the end of the string.
#include<iostream>
using namespace std;

string movex(string s){
    string k="";
    if(s.size()==1){
        return s;
    }

    if(s[0]=='x'){
        return k+movex(s.substr(1))+"x";
    }

    return k+s[0]+movex(s.substr(1));

}

int main(){

    string s = "awdxxxsefxxwfxxxx";

    string s2= movex(s);

    cout<<s2<<endl;

    return 0;
}