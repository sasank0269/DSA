#include<bits/stdc++.h>
using namespace std;

struct node{

    int val;
    node* left;
    node* right;

    node(int x){
        val=x;
        left=NULL;
        right=NULL;
    }

};

void inorder(node* root){

    if(root==NULL) return;

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void preorder(node* root){

    if(root==NULL) return;

    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){

    if(root==NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
}

int main(){

    node* root = new node(1);

    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(8);

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;

    return 0;
}