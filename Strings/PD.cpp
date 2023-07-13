//Print all duplicates in the input string
#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<unordered_map>
using namespace std;
int main(){

    string s;
    getline(cin,s);

    unordered_map<char,int> r;

    for(int i=0; i<s.size(); i++){
        r[s[i]]++;
    }

    for(auto i:r){
        if(i.second>1){
            cout<<i.first<<" count: "<<i.second<<endl;
        }
    }

    return 0;

    
}