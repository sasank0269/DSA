//find intersection point of 2 linked lists.
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

int length(node* &head){
    int len=0;
    node*temp =head;
    while(temp){
        temp=temp->next;
        len++;
    }
    return len;
}

int intersect(node* &head1, node* &head2){

    int len1=length(head1);
    int len2=length(head2);
    node* temp1;
    node* temp2; 
    int diff=abs(len1-len2);
    if(len1>len2){
        temp1=head1;
        while(diff){
            temp1=temp1->next;
            diff--;
        }
        temp2 = head2;
    }
    else{
        temp1=head2;
        while(diff){
            temp1=temp1->next;
            diff--;
        }
        temp2 = head1;
    }

    while(temp1!=temp2){
        temp1=temp1->next;
        temp2=temp2->next;
    }

    return temp1->data;



}


int main(){
    node* head=NULL;
    node* head2 = NULL;
    insertend(head,1);
    insertend(head,2);
    insertend(head,3);
    insertend(head,4);
    insertend(head,5);
    insertend(head2,7);
    insertend(head2,8);
    insertend(head,6);
    node*n =head;
    node*n2 = head2;
    while(n->data!=5) n=n->next;
    while(n2->data!=8) n2=n2->next;
    n2->next=n;
    cout<<intersect(head,head2)<<endl;
    
    return 0;
}


