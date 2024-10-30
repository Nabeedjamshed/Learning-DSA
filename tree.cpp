#include<iostream>
#include<queue>
#include<stack>
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

void print(Node* root){
    if (root==nullptr)
    {
        return;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right); 
}

// void levelorder(Node* root){
//     if (root == nullptr)
//     {
//         return;
//     }
//     queue <Node*> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         Node* temp = q.front();
//         cout<<temp->data<<" ";
//         if (temp->left != nullptr)
//         {
//             q.push(temp->left);
//         } if (temp->right != nullptr)
//         {
//             q.push(temp->right);
//         }
//         q.pop();
//     }
    
// }

void preorderbystack(Node* root){
    if (root == nullptr)
    {
        return;
    }
    stack <Node*>S;
    S.push(root);
    while (!S.empty())
    {
        Node* temp = S.top();
        S.pop();
        cout<<temp->data<<" ";
        if (temp->right != nullptr)
        {
            S.push(temp->right);
        } if (temp->left != nullptr)
        {
            S.push(temp->left);
        }
    }
}

// void inorderbystack(Node* root){
//     if (root == nullptr)
//     {
//         return;
//     } 
//     stack <Node*> s;
//     s.push(root);
//     Node* temp = root;
//     while (!s.empty())
//     {
//         while(temp->left != nullptr){
//             s.push(temp->left);
//             temp = temp->left;
//         }
//         Node* ans = s.top();
//         cout<<ans->data<<" ";
//         s.pop();
//         temp = temp->right;
//         // while(temp->right != nullptr){
//         // s.push(temp->right);
//         // }
//         // Node* ans1 = s.top();
//         // cout<<ans1->data<<" ";
//         // s.pop();
//     }
// }

void inorderByStack(Node* root) {
    if (root == nullptr) {
        return;
    }

    stack<Node*> s;
    Node* curr = root;

    while (curr != nullptr || !s.empty()) {
        // Reach the leftmost node of the current Node
        while (curr != nullptr) {
            s.push(curr);
            curr = curr->left;
        }

        // Current must be nullptr at this point
        curr = s.top();
        s.pop();

        cout << curr->data << " ";  // Visit the node

        // Move to the right subtree
        curr = curr->right;
    }
}
void preorder(Node* root){
    if (root == nullptr)
    {
        return;
    }
    Node* temp = root;
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}
void inorder(Node* root){
    if (root == nullptr)
    {
        return;
    }
    Node* temp = root;
    preorder(temp->left);
    cout<<temp->data<<" ";
    preorder(temp->right);
}

int max(int n1, int n2){
    if (n1> n2)
    {
        return n1;
    } else {
        return n2;
    }
    
}
int maxdepth(Node* root){
    if (root == nullptr)
    {
        return 0;
    }
    int l = maxdepth(root->left);
    int r = maxdepth(root->right);
    return max(l, r)+1;
}

int levelorderdepth(Node* root){
    if (root == nullptr)
    {
        return 0;
    }
    int depth = 0;
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        int currsize = q.size();
        for (int i = 0; i < currsize; i++)
        {
            Node* temp = q.front();
            q.pop();
            cout<<temp->data<<" ";
            if (temp->left != nullptr)
            {
                q.push(temp->left);
            } 
            if (temp->right != nullptr)
            {
                q.push(temp->right);
            } 
        }
        depth++;
        }
        

    return depth;
}


bool isbalancetree(Node* root){
    if (root == nullptr)
    {
        return true;
    }
    int l = isbalancetree(root->left);
    int r = isbalancetree(root->right);
    if (abs(l-r) > 1)
    {
        return false;
    }
    
    return max(l,r)+1;
}
int main() {
    Node* root = nullptr;
    // root = insert(root, 12);
    // root = insert(root, 10);
    // root = insert(root, 14);
    // root = insert(root, 9);
    // root = insert(root, 11);
    // root = insert(root, 13);
    // root = insert(root, 15);
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 3);
    root = insert(root, 4);

    // print(root);
    // cout<<endl;
    // levelorder(root);
    // cout<<endl;
    // preorderbystack(root);
    // cout<<endl;
    // preorder(root);
    // inorderByStack(root);
    // cout<<endl;
    // inorder(root);
    int res1 = maxdepth(root);
    cout<<"Max depth is: "<<res1<<endl;
    int res = levelorderdepth(root);
    cout<<"Max depth is: "<<res<<endl;
    bool balance = isbalancetree(root);
    if (balance)
    {
        cout<<"balance"<<endl;
    } else {
        cout<<"unbalaced"<<endl;
    }
    
    return 0;
}