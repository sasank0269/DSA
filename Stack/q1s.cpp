//Queue using 1 stack.
#include<bits/stdc++.h>
using namespace std;

class que{

    stack<int> st;

    public:
    void push(int x){
        st.push(x);
    }
    void pop(){
        if(st.empty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        del(st);

    }
    void del(stack<int> &s){

        if(s.size()==1){
            cout<<s.top()<<endl;
            s.pop();
            return;
        }

        int ele=s.top();
        s.pop();
        del(s);
        s.push(ele);
    }

};

int main(){

    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    return 0;
}