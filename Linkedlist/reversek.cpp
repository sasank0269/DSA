//Reverse k elements in a linked list.
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

void reversek(node* &head,int k){

    node* dummy = new node(-1);
    node* temp1=dummy;
    node* curr= head;
    node* prev=NULL;
    node* next;
    node* temp2=head;
    int cnt=0;
    while(curr){
        while(cnt!=k && curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
        temp1->next=prev;
        temp1=temp2;
        temp2=curr;
        prev=NULL;
        cnt=0;
    }
    head=dummy->next;
    delete dummy;

}



int main(){
    node* head=NULL;
    insertend(head,1);
    insertend(head,2);
    insertend(head,3);
    insertend(head,4);
    insertend(head,5);
    
    printll(head);
    cout<<endl;
    reversek(head,2);
    printll(head);
    return 0;
}