#include <bits/stdc++.h>
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

node* swap(node* root){

    if(!root||!root->next) return root;
    node* t1=root;
    node* t2=root->next;
    node* ans=t2;
    while(t1 && t2){
        t1->next=t2->next;
        t2->next=t1;
        t1=t1->next;
        if(t1){
        t2=t1->next;
        }
    }
    return ans;
}

int main(){

    int n;
    cin>>n;
    node* dummy = new node(-1);
    node* prev=dummy;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        prev->next=new node(k);
        prev=prev->next;
    }
    node* root=dummy->next;
    delete dummy;

    node* ans=swap(root);

    while(ans){
        cout<<ans->data;
        ans=ans->next;
    }



    return 0;
}