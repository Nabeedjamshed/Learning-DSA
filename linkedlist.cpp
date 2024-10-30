#include<iostream>
#include<queue>
#include<vector>
#include <numeric>
#include<algorithm>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
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
    if (root == nullptr)
    {
        return;
    }
    queue <Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* temp = q.front();
        cout<<temp->data<<" ";
        if (temp->left != nullptr)
        {
            q.push(temp->left);
        } if (temp->right != nullptr)
        {
            q.push(temp->right);
        }
        q.pop();
    }
    
}

int check(Node* root) {
    if (root == nullptr) {
        return -1;
    }

    queue<Node*> q;
    q.push(root);
    vector<int> l;

    while (!q.empty()) {
        vector<int> newl;
        int currSize = q.size();

        for (int i = 0; i < currSize; i++) {
            Node* temp = q.front();
            q.pop();
            newl.push_back(temp->data); 

            if (temp->left != nullptr) {
                q.push(temp->left);
            }
            if (temp->right != nullptr) {
                q.push(temp->right);
            }
        }

        int sum = accumulate(newl.begin(), newl.end(), 0); 
        l.push_back(sum);
    }
    sort(l.begin(), l.end());
    reverse(l.begin(), l.end());
    for (auto& a:l)
    {
        cout<< a<< " ";
    }
    int ans;
    if (l.size() < 4)
    {
        ans = -1;
    } else {
        for (int i = 0; i < 4; i++)
        {
            ans = l[i];
        
        }
    }
    cout<<endl;
    cout<<ans;
}
int main() {
    Node* root = nullptr;
    root = insert(root, 5);
    root = insert(root, 8);
    root = insert(root, 9);
    root = insert(root, 2);
    root = insert(root, 1);
    root = insert(root, 3);
    root = insert(root, 7);
    // root = insert(root, 4);
    // root = insert(root, 6);
    levelorder(root);
    cout<<endl;
    check(root);
    return 0;
}