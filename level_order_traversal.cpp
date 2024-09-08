#include <iostream>
#include<queue>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *root = nullptr;
Node *insert(Node *root, int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->left = nullptr;
    temp->right = nullptr;
    if (root == nullptr)
    {
        root = temp;
    }
    else if (x <= root->data)
    {
        root->left = insert(root->left, x);
    }
    else
    {
        root->right = insert(root->right, x);
    }
    return root;
}

void levelorder(Node* root){
    if (root==nullptr)
    {
        return;
    }
    queue <Node*> Q;
    Q.push(root);
    while (!Q.empty())
    {
        Node* temp = Q.front();
        cout<<temp->data<<" ";
        if (temp->left!=nullptr)
        {
            Q.push(temp->left);
        } if (temp->right!=nullptr)
        {
            Q.push(temp->right);
        }
        Q.pop();
    }  
}

int main()
{
    root = nullptr;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 9);
    root = insert(root, 25);
    root = insert(root, 16);
    root = insert(root, 11);
    levelorder(root);
    cout << endl;
    return 0;
}