#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};

void postOrder(node* root){
    if(!root){
        return;
    }
    
    stack<node*> s;
    do{
        while(root){
            if(root->right){
                s.push(root->right);
            }
            s.push(root);
            root=root->left;
        }
        root=s.top();
        s.pop();
        if(root->right && !s.empty() && s.top()==root->right){
            s.pop();
            s.push(root);
            root = root->right;
        }
        else{
            cout << root->data << endl;
            root=NULL;
        }

    }while(!s.empty());
}

int main(){
    node* root = new node(1); 
    root->left = new node(2); 
    root->right = new node(3); 
    root->left->left = new node(4); 
    root->left->right = new node(5); 
    root->right->left = new node(6); 
    root->right->right = new node(7);
    postOrder(root);
    return 0;
}