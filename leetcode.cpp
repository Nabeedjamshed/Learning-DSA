// #include<iostream>
// #include<cmath>
// using namespace std;

// struct ListNode{
//     int val;
//     ListNode* next;
// };
// ListNode* head= nullptr;    
// ListNode* insert(ListNode* head, int n){
//     ListNode* temp = new ListNode();
//     temp->val = n;
//     temp->next = nullptr;
//     ListNode* newnode = head;
//     if (head == nullptr)
//     {
//         head = temp;
//     } else{
    
//     while (newnode->next != nullptr)
//     {
//         newnode = newnode->next;
//     }
//     newnode->next = temp;
//     }
//     return head;
// }
// void print(ListNode* head){
//     ListNode* temp = head;
//     while (temp != nullptr)
//     {
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }
// ListNode* middlee(ListNode* head){
//         ListNode* temp = head;
//         float lenght = 1;
//         while (temp != nullptr)
//         {
//             temp = temp->next;
//             lenght++;
//         }
//         float newlenght = ceil(lenght / 2);
//         ListNode *temp1 = head;
//         for (int i = 1; i < newlenght; i++)
//         {
//             temp1 = temp1->next;
//         }
//         while(temp1!=nullptr){
//             cout<<temp1->val<<" ";
//             temp1 = temp1->next;
//         }
//         // return temp1;
    
// }
// int main() {
//     head = nullptr;
//     head = insert(head, 1);
//     head = insert(head, 2);
//     head = insert(head, 3);
//     head = insert(head, 4);
//     head = insert(head, 5);
//     head = insert(head, 6);
//     print(head);
//     middlee(head);
//     return 0;
// }


// #include<iostream>
// #include<stack>
// using namespace std;

// int maxDepth(string s){
//     stack <int> S;
//     int lenght = 0;
//     for(auto& a:s){
//         if (a=='(')
//         {
//             S.push(a);
//         } else if (a==')')
//         {
//             int len = S.size();
//             if (lenght<len)
//             {
//                 lenght = len;
//             }
//             S.pop();
//         }  
//     }
//     return lenght;
// }
// int main() {
//     string s = "(1+(2*3)+((8)/4))+1";
//     maxDepth(s);
//     return 0;
// }


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode* minimum(TreeNode* root){
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

TreeNode* deleteNode(TreeNode* root, int key){
    if (root==nullptr)
    {
        return root;
    } 
    else if (key < root->val)
    {
        root->left = deleteNode(root->left,key);
    } else if (key>root->val)
    {
        root->right = deleteNode(root->right,key);
    } else {
        if (root->left==nullptr && root->right==nullptr)
        {
            delete root;
            root = nullptr;
        } else if (root->left==nullptr)
        {
            TreeNode* temp = root;
            root = root->right;
            delete temp;
        } 
        else if (root->right==nullptr)
        {
            TreeNode* temp = root;
            root = root->left;
            delete temp;
        } 
        else {
            TreeNode* min = minimum(root->right);
            root->val = min->val;
            root->right = deleteNode(root->right,min->val);
        }
        return root;
    }
}
};