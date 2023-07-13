//Print all palindromic partitions of a string.
#include<bits/stdc++.h>
using namespace std;

bool check(string s){

    int i=0,j=s.size()-1;

    while(i<=j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;

}

void palindrome(string s, vector<string> &temp, vector<vector<string>> &res){

    if(s==""){
        res.push_back(temp);
        return;
    }

    for(int i=1; i<=s.size(); i++){

        if(check(s.substr(0,i))){
            temp.push_back(s.substr(0,i));
            
            palindrome(s.substr(i),temp,res);
            temp.pop_back();
        }

    }
    return;
}

vector<vector<string>> palinpart(string s){

    vector<vector<string>> res;
    vector<string> temp;
    palindrome(s,temp,res);
    return res;
}

int main(){

    string s="geeks";
    vector<vector<string>> ans=palinpart(s);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}