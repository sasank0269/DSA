//Infix to postfix conversion.
#include<bits/stdc++.h>
using namespace std;

int prec(char c){

    if(c=='*' || c=='/') return 2;
    else if(c=='+' || c=='-') return 1;
    return -1;
}

string infixtopostfix(string s){

    string res="";
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            res+=s[i];
        }
        else if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')'){
            while(st.top()!='('){
                res+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(s[i])<prec(st.top())){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;

}


int main(){

    cout<<infixtopostfix("(a+b/c)*(a/d-k)")<<endl;
    return 0;
}