//Reverse a linked list.
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;


    node(int val){
        data=val;
        next=NULL;
    }

};

void insertend(node* &head, int val){
    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next=n;
}

void printll(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void reverse(node* &head){

    if(head==NULL) return;
    node* prev=NULL;
    node* curr=head;
    node* next;

    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;

}



int main(){
    node* head=NULL;
    insertend(head,1);
    
    
    reverse(head);
    printll(head);
    return 0;
}