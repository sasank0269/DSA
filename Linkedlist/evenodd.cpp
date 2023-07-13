//Put even position nodes after odd position nodes.
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

void evenodd(node* &head){

    node* odd= head;
    node* even = head->next;
    node* temp=even;

    while(odd && even && even->next!=NULL){
        odd->next=even->next;
        odd = odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=temp;

}



int main(){
    node* head=NULL;
    insertend(head,1);
    insertend(head,2);
    insertend(head,3);
    insertend(head,4);
    insertend(head,5);
    insertend(head,6);
    evenodd(head);
    printll(head);
    return 0;
}