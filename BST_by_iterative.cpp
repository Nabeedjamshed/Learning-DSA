#include <iostream>
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
    else
    {
        Node *newnode = root;
        while (newnode->left != nullptr && newnode->right != nullptr)
        {
            if (x <= newnode->data)
            {
                newnode = newnode->left;
            }
            else
            {
                newnode = newnode->right;
            }
        }
        if (x <= newnode->data)
        {
            newnode->left = temp;
        }
        else
        {
            newnode->right = temp;
            ;
        }
    }
    return root;
}
bool search(Node *root, int x)
{
    while (root != nullptr)
    {
        if (root->data == x)
        {
            return true;
        }
        else if (x <= root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return false;
}
int minimum(Node* root){
    if (root==nullptr){
        return -1;
    }
    Node* temp = root;
    while (temp->left!=nullptr){
        temp = temp->left;  
    }
    return temp->data;
}

int maximum(Node* root){
    if (root==nullptr){
        return -1;
    }
    Node* temp = root;
    while (temp->right!=nullptr){
        temp = temp->right;  
    }
    return temp->data;
}

void print(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    print(root->left);
    cout << root->data << " ";
    print(root->right);
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
    print(root);
    cout << endl;
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // bool result = search(root, n);
    // if (result)
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "Not Found" << endl;
    // }
    int maxi = maximum(root);
    cout<<"The maximum element in tree is: "<<maxi<<endl;
    int mini = minimum(root);
    cout<<"The minimum element in tree is: "<<mini<<endl;
    return 0;
}