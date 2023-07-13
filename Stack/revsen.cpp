//Reverse a sentence using stack.
#include<bits/stdc++.h>
using namespace std;

void reversesentence(string s){

    stack<string> st;

    int i=0;
    while(i<s.size()){

        string word="";
        while(i<s.size() && s[i]!=' '){
            word+=s[i];
            i++;
        }
        i++;
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;


}

int main(){

    string s="Hey! how are you doing?";
    reversesentence(s);

    return 0;
}