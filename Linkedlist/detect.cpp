//Detect cycle in linked list. (Hare and tortoise algo, floyd algo).
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

bool hat_algo(node* &head){
    
    node* t = head;
    node* h = head;

    while( h!=NULL && h->next!=NULL){
        t = t->next;
        h = h->next->next;

        if(t==h){
            return true;
        }

    }
    return false;

}

void removecycle(node* &head){
    
    node* t = head;
    node* h = head;

    while( h!=NULL && h->next!=NULL){
        t = t->next;
        h = h->next->next;

        if(t==h){
            h = head;
            while(t->next!=h->next){
                t=t->next;
                h=h->next;
            }
            t->next=NULL;
            return;
        }

    }
    

}

int main(){
    node* head=NULL;
    insertend(head,1);
    insertend(head,2);
    insertend(head,3);
    insertend(head,4);
    insertend(head,5);
    node* temp=head->next;
    node* temp2=head;
    while(temp2->next!=NULL) temp2=temp2->next;
    temp2->next=temp;
    cout<<hat_algo(head)<<endl;
    removecycle(head);
    cout<<hat_algo(head)<<endl;
    return 0;
}