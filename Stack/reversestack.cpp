//Reverse stack without extra space.
#include<bits/stdc++.h>
using namespace std;

void insertbottom(stack<int> &st, int ele){

    if(!st.empty()){
        st.push(ele);
        return;
    }

    int topele=st.top();
    st.pop();
    insertbottom(st,ele);
    st.push(topele);
}

void reverse(stack<int> &st){

    if(!st.empty()) return;

    int ele=st.top();
    st.pop();
    reverse(st);
    insertbottom(st,ele);
}

int main(){

    stack<int> st;

    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}