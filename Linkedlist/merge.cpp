//Merge 2 sorted linked lists.
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

node* merg(node* &head1, node* &head2){

    node* p1=head1;
    node* p2=head2;
    node* dummy = new node(-1);
    node* p3=dummy;

    while(p1 && p2){
        if(p1->data<p2->data){
            p3->next=p1;
            p3 = p3->next;
            p1=p1->next;
        }

        else{
            p3->next=p2;
            p3 = p3->next;
            p2=p2->next;
        }
    }
    if(p1){
        p3->next=p1;
    }
    if(p2){
        p3->next=p2;
    }

    return dummy->next;

}


int main(){
    node* head=NULL;
    node* head2=NULL;
    insertend(head,1);
    insertend(head2,2);
    insertend(head,3);
    insertend(head2,4);
    insertend(head,5);
    node* res=merg(head,head2);
    printll(res);
    return 0;
}