#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* root = nullptr;
Node* insert(Node* root, int x){
    Node* temp = new Node();
    temp->data = x;
    temp->left = nullptr;
    temp->right = nullptr;
    if (root==nullptr)
    {
        root = temp;
    } else {
        if (x<=root->data)
        {
            root->left = insert(root->left,x);
        } else {
            root->right = insert(root->right,x);
        }  
    }
    return root;
}

int max(int n1, int n2){
    if (n1>n2)
    {
        return n1;
    } else {
        return n2;
    }  
}

int height(Node* root){
    if (root==nullptr)
    {
        return -1;
    } 
    return max(height(root->left),height(root->right))+1;
}
void print(Node* root){
    if (root==nullptr)
    {
        return;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
int main() {
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,9);
    root = insert(root,25);
    root = insert(root,11);
    root = insert(root,16);
    print(root);
    cout<<endl;
    cout<<"The height of the binary tree is: "<<height(root)<<endl;
    return 0;
}