#include<iostream>
using namespace std;

struct Node
{
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
        Node* temp1 = root;
        if (x<=temp1->data)
        {
            temp1->left = insert(temp1->left,x);
        } else {
            temp1->right = insert(temp1->right,x);
        }  
    }
    return root;
}

Node* minimum(Node* root){
    if (root==nullptr)
    {
        return root;
    }
    if (root->left == nullptr)
    {
        return root;
    }
    return minimum(root->left);   
}

Node* deleted(Node* root, int x){
    if (root==nullptr)
    {
        return root;
    } 
    else if (x < root->data)
    {
        root->left = deleted(root->left,x);
    } else if (x>root->data)
    {
        root->right = deleted(root->right,x);
    } else {
        if (root->left==nullptr && root->right==nullptr)
        {
            delete root;
            root = nullptr;
        } else if (root->left==nullptr)
        {
            Node* temp = root;
            root = root->right;
            delete temp;
        } 
        else if (root->right==nullptr)
        {
            Node* temp = root;
            root = root->left;
            delete temp;
        } 
        else {
            Node* min = minimum(root->right);
            root->data = min->data;
            root->right = deleted(root->right,min->data);
        }
        return root;
    }
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
    root = nullptr;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 9);
    root = insert(root, 25);
    root = insert(root, 16);
    root = insert(root, 11);
    print(root);
    cout<<endl;
    Node* res = deleted(root, 15);
    cout<<"The deleted element is: "<<res->data<<" "<<endl;
    print(root);
    return 0;
}