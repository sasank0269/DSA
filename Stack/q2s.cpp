//Queue using 2 stacks.
#include<bits/stdc++.h>
using namespace std;

class que{

    stack<int> s1;
    stack<int> s2;

    public:
    void push(int x){
        s1.push(x);
    }

    void pop(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            cout<<s2.top()<<endl;
            s2.pop();
            return;
        }
        cout<<s2.top()<<endl;
        s2.pop();
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