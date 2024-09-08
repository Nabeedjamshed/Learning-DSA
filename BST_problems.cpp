// //Given binary tree is a binary search tree or not
// // 1. By Resursion
// #include <iostream>
// #include<queue>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
// };
// Node *root = nullptr;

// Node *insert(Node *root, int x)
// {
//     Node *temp = new Node();
//     temp->data = x;
//     temp->left = nullptr;
//     temp->right = nullptr;
//     if (root == nullptr)
//     {
//         root = temp;
//     }
//     else if (x <= root->data)
//     {
//         root->left = insert(root->left, x);
//     }
//     else
//     {
//         root->right = insert(root->right, x);
//     }
//     return root;
// }



// bool isSubTreeLesser(Node* root, int x){
//     if (root==nullptr)
//     {
//         return true;
//     }
//     if ((root->data <= x) && isSubTreeLesser(root->left,x) && isSubTreeLesser(root->right, x))
//     {
//         return true;
//     } else {
//         return false;
//     }  
// }
// bool isSubTreeGreater(Node* root, int x){
//     if (root==nullptr)
//     {
//         return true;
//     }
//     if ((root->data > x) && isSubTreeGreater(root->left,x) && isSubTreeGreater(root->right, x))
//     {
//         return true;
//     } else {
//         return false;
//     } 
// }
// bool isBinarySearchTree(Node* root){
//     if (root==nullptr)
//     {
//         return true;
//     }
//     if ((isSubTreeLesser(root->left, root->data)) && (isSubTreeGreater(root->right, root->data)) && isBinarySearchTree(root->left) && isBinarySearchTree(root->right))
//     {
//         return true;
//     } else {
//         return false;
//     }
    
// }
// void print(Node* root){
//     if (root==nullptr)
//     {
//         return;
//     }
//     print(root->left);
//     cout<<root->data<<" ";
//     print(root->right);
// }

// int main()
// {
//     root = nullptr;
//     root = insert(root, 15);
//     root = insert(root, 10);
//     root = insert(root, 20);
//     root = insert(root, 9);
//     root = insert(root, 25);
//     root = insert(root, 11);
//     root = insert(root, 16);
//     // root = insert(root, 5);
//     // root = insert(root, 1);
//     // root = insert(root, 8);
//     // root = insert(root, 9);
//     // root = insert(root, 12);
//     print(root);
//     cout << endl;
//     bool result = isBinarySearchTree(root);
//     if (result)
//     {
//         cout<<"The given tree is binary search tree.";
//     } else {
//         cout<<"The given tree is not binary search tree.";
//     }
    
//     return 0;
// }


// 2. By max and min limits

#include<iostream>
#include<queue>
#include<climits>
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
// Node* insert(Node* root, int key) {
//     Node* newnode = new Node();
//     newnode->data = key;
//     newnode->left = nullptr;
//     newnode->right = nullptr;
//     if (root==nullptr)
//     {
//         root = newnode;
//         return root;
//     }
//     queue <Node*> Q;
//     Q.push(root);
//     while (!Q.empty())
//     {
//         Node* current = Q.front();
//         Q.pop();
//         if (current->left==nullptr)
//         {
//             current->left = newnode;
//             return root;
//         } else {
//             Q.push(current->left);
//         }
//         if (current->right==nullptr)
//         {
//             current->right = newnode;
//             return root;
//         } else {
//             Q.push(current->right);
//         }  
//     }
//     return root;
// }
bool isBstUtil(Node* root, int min, int max){
    if (root==nullptr)
    {
        return true;
    } if (root->data < min || root->data > max)
    {
        return false;
    }
    return isBstUtil(root->left, min, root->data) && isBstUtil(root->right, root->data, max);
    
}
bool isBinarySearchTree(Node* root){
    return isBstUtil(root, INT_MIN, INT_MAX);
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
    root = insert(root, 11);
    root = insert(root, 16);
    // root = insert(root, 5);
    // root = insert(root, 1);
    // root = insert(root, 8);
    // root = insert(root, 9);
    // root = insert(root, 12);
    print(root);
    cout << endl;
    bool result = isBinarySearchTree(root);
    if (result)
    {
        cout<<"The given tree is binary search tree.";
    } else {
        cout<<"The given tree is not binary search tree.";
    }
    
    return 0;
}


// 3. By Inorder Approach
// #include <iostream>
// #include<vector>
// #include<algorithm>
// #include<queue>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;
// };
// Node *root = nullptr;
// vector <int> l;
// // Node *insert(Node *root, int x)
// // {
// //     Node *temp = new Node();
// //     temp->data = x;
// //     temp->left = nullptr;
// //     temp->right = nullptr;
// //     if (root == nullptr)
// //     {
// //         root = temp;
// //     }
// //     else if (x <= root->data)
// //     {
// //         root->left = insert(root->left, x);
// //     }
// //     else
// //     {
// //         root->right = insert(root->right, x);
// //     }
// //     return root;
// // }
// Node* insert(Node* root, int key) {
//     Node* newNode = new Node();
//     newNode->data = key;
//     newNode->left = nullptr;
//     newNode->right = nullptr;

//     if (root == nullptr) {
//         return newNode;
//     }

//     queue <Node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         Node* current = q.front();
//         q.pop();

//         if (current->left == nullptr) {
//             current->left = newNode;
//             return root;
//         } else {
//             q.push(current->left);
//         }

//         if (current->right == nullptr) {
//             current->right = newNode;
//             return root;
//         } else {
//             q.push(current->right);
//         }
//     }

//     return root;
// }
// bool isBinarySearchTree(Node* root){
//     vector <int> l1 = l;
//     sort(l.begin(), l.end());
//     if (l1==l)
//     {
//         return true;
//     } else {
//         return false;
//     }
    
// }
// void Inorder(Node* root){
//     if (root==nullptr)
//     {
//         return;
//     }
//     Inorder(root->left);
//     l.push_back(root->data);
//     Inorder(root->right);
// }
// int main(){
//     root = nullptr;
//     // root = insert(root, 15);
//     // root = insert(root, 10);
//     // root = insert(root, 20);
//     // root = insert(root, 9);
//     // root = insert(root, 25);
//     // root = insert(root, 11);
//     // root = insert(root, 16);
//     root = insert(root, 5);
//     root = insert(root, 1);
//     root = insert(root, 8);
//     root = insert(root, 9);
//     root = insert(root, 12);
//     Inorder(root);
//     bool result = isBinarySearchTree(root);
//     if (result)
//     {
//         cout<<"The given tree is binary search tree.";
//     } else {
//         cout<<"The given tree is not binary search tree.";
//     }
//     return 0;
// }