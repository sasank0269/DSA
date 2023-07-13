#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* prev;
    node* next;

    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }

};

void insertend(node* &head, int val){

    node* n= new node(val);
    if(head==NULL) {
        head=n;
        return;
    }

    node* temp=head;

    while(temp->next!=NULL) temp=temp->next;

    temp->next=n;
    n->prev=temp;

}

void printlr(node* &head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void printrl(node* &head){
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }

    cout<<endl;
}

void insertpos(node* &head,int val, int key){

    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    if(key==0){
        n->next=head;
        head->prev=n;
        head=n;
        return;
    }

    int j=0;
    node* temp=head;
    while(j!=key-1){
        temp=temp->next;
        j++;
    }

    temp->next->prev=n;
    n->next=temp->next;
    temp->next=n;
    n->prev=temp;
    
}


int main(){
    node* head=NULL;
    insertend(head,1);
    insertend(head,2);
    insertend(head,3);
    insertend(head,4);
    insertend(head,5);
    insertpos(head,6,2);
    printlr(head);
    printrl(head);

    return 0;
}