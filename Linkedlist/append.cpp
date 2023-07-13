//Append last k nodes of a linked list.
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

void appendk(node* &head, int k){
    int len=0;
    node*tail =head;
    while (tail->next!=NULL)
    {
        tail=tail->next;
        len++;
    }
    len++;

    int j=0;
    node* temp = head;
    while(j!=len-k-1) {temp=temp->next; j++;}

    tail->next=head;
    head=temp->next;
    temp->next=NULL;
    
}


int main(){
    node* head=NULL;
    insertend(head,1);
    insertend(head,2);
    insertend(head,3);
    insertend(head,4);
    insertend(head,5);
    appendk(head,3);
    printll(head);
    return 0;
}