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

void insertmid(node* &head,int val, int key){
    node* n=new node(val);
    node* temp=head;

    if(key==0){
        n->next=head;
        head=n;
        return;
    }
    int j=0;

    while(j!=key-1){
        temp=temp->next;
        j++;
    }
    n->next=temp->next;
    temp->next=n;
}

int main(){
    node* head=NULL;
    insertend(head,1);
    insertend(head,2);
    insertend(head,3);
    insertend(head,4);
    insertend(head,5);
    insertmid(head,7,0);
    printll(head);
    return 0;
}