//Stack using queue.
#include<bits/stdc++.h>
using namespace std;

class Stack{

    int N=0;
    queue<int> q1;
    queue<int> q2;

    public:
    void push(int x){
        q2.push(x);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }

    void pop(){
        if(q1.empty()){
            cout<<"Stack is empty"<<endl;
            return;
        }
        cout<<q1.front()<<endl;
        q1.pop();
    }

};

int main(){

    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.pop();
    s1.pop();
    s1.pop();

    return 0;
}