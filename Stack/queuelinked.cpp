//Queue using linked list.
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int x){
        data=x;
        next=NULL;
    }
};

class queu{
    node* front;
    node* back;

    public:
    queu(){
        front = NULL;
        back = NULL;
    }
    void push(int val){
        node* n=new node(val);
        if(front==NULL){
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }
    void pop(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        node* temp=front;
        front=front->next;
        delete temp;
    }
    void peek(){
        if(front==NULL){
            cout<<"queue is empty"<<endl;
            return;
        }
        cout<<front->data<<endl;
    }
    bool empty(){
        if(front==NULL) return true;
        return false;
    }
};

int main(){

    queu q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    q.peek();
    q.pop();
    

    return 0;
}