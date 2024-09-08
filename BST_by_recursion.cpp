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

bool search(Node *root, int x)
{
    if (root == nullptr)
    {
        return false;
    }
    else
    {
        if (root->data == x)
        {
            return true;
        }
        else if (x <= root->data)
        {
            search(root->left, x);
        }
        else
        {
            search(root->right, x);
        }
    }
}

int maximum(Node* root){
    if (root==nullptr)
    {
        return -1;
    } else if (root->right==nullptr)
    {
        return root->data;
    } else {
        maximum(root->right);
    }
}
int minimum(Node* root){
    if (root==nullptr)
    {
        return -1;
    } else if (root->left==nullptr)
    {
        return root->data;
    } else {
        minimum(root->left);
    }   
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

// My code
// bool search(Node *root, int x)
// {
//     if (root == nullptr)
//     {
//         return false;
//     }
//     else
//     {
//         if (root->data == x)
//         {
//             return true;
//         }
//         else
//         {
//             while (right != nullptr && left != nullptr)
//             {
//                 if (x <= root->data)
//                 {
//                     root = root->left;
//                     if (root->data == x)
//                     {
//                         return true;
//                     }
//                     else
//                     {
//                         return false;
//                     }
//                 }
//                 else
//                 {
//                     root = root->right;
//                     if (root->data == x)
//                     {
//                         return true;
//                     }
//                     else
//                     {
//                         return false;
//                     }
//                 }
//             }
//         }
//     }
// }
