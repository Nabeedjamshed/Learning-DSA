// #include <iostream>
// #include <vector>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* insertion(Node* root, int element) {
//     Node* temp = new Node();
//     temp->data = element;
//     temp->left = nullptr;
//     temp->right = nullptr;
//     if (root == nullptr) {
//         root = temp;
//     } else if (root->data > element) {
//         root->left = insertion(root->left, element);
//     } else {
//         root->right = insertion(root->right, element);
//     }
//     return root;
// }

// bool get(Node* root, vector<int>& v1, int p) { 
//     if (root == nullptr) {
//         return false;
//     }
//     v1.push_back(root->data);
//     if (root->data == p) {
//         return true;
//     }
//     if (get(root->left, v1, p) || get(root->right, v1, p)) {
//         return true;
//     }
//     v1.pop_back();
//     return false;
// }

// vector<int> pathfinder(Node* root, int p) {
//     vector<int> v1;
//     if (root == nullptr) {
//         return v1;
//     }
//     get(root, v1, p);
//     return v1;
// }

// int lowest_common_ancestor(Node* root, int p, int q) {
//     vector<int> arr1 = pathfinder(root, p);
//     vector<int> arr2 = pathfinder(root, q);

//     int lca = -1;
//     for (int i = 0; i < min(arr1.size(), arr2.size()); i++) {
//         if (arr1[i] == arr2[i]) {
//             lca = arr1[i];
//         } else {
//             break;
//         }
//     }
//     return lca;
// }

// void inorder(Node* root) {
//     if (root == nullptr) {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// int main() {
//     Node* root = nullptr;
//     root = insertion(root, 6);
//     root = insertion(root, 3);
//     root = insertion(root, 8);
//     root = insertion(root, 2);
//     root = insertion(root, 4);
//     root = insertion(root, 7);
//     root = insertion(root, 9);
//     inorder(root);
//     cout<<endl;
//     int lca = lowest_common_ancestor(root, 4, 2); 
//     if (lca != -1)
//     {
//         cout << "Lowest Common Ancestor: " << lca << endl;
//     } else {
//         cout<<"None"<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* insertion(Node* root, int element) {
//     Node* temp = new Node();
//     temp->data = element;
//     temp->left = nullptr;
//     temp->right = nullptr;
//     if (root == nullptr) {
//         root = temp;
//     } else if (root->data > element) {
//         root->left = insertion(root->left, element);
//     } else {
//         root->right = insertion(root->right, element);
//     }
//     return root;
// }

// void preorder(Node* root){
// 	if(root == nullptr){
// 		return;
// 	}
// 	cout<<root->data<<" ";
// 	preorder(root->left);
// 	preorder(root->right);
// }

// void postorder(Node* root){
// 	if(root == nullptr){
// 		return;
// 	}
// 	postorder(root->left);
// 	postorder(root->right);
// 	cout<<root->data<<" ";
// }

// int main() {
//     Node* root = nullptr;
//     root = insertion(root, 15);
//     root = insertion(root, 10);
//     root = insertion(root, 20);
//     root = insertion(root, 5);
//     root = insertion(root, 13);
//     root = insertion(root, 18);
//     cout<<"Preorder: ";
//     preorder(root);
//     cout<<endl;
//     cout<<"Postorder: ";
//     postorder(root);
//     return 0;
// }


#include <iostream>
#include<vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insertion(Node* root, int element) {
    Node* temp = new Node();
    temp->data = element;
    temp->left = nullptr;
    temp->right = nullptr;
    if (root == nullptr) {
        root = temp;
    } else if (root->data > element) {
        root->left = insertion(root->left, element);
    } else {
        root->right = insertion(root->right, element);
    }
    return root;
}

int sum = 0;
void inorder(Node* root){
	if(root == nullptr){
		return;
	}
	inorder(root->left);
    sum += root->data;
	inorder(root->right);  
}


int main() {
    Node* root = nullptr;
    root = insertion(root, 6);
    root = insertion(root, 3);
    root = insertion(root, 8);
    root = insertion(root, 2);
    root = insertion(root, 4);
    inorder(root);
    cout<<"Sum of Tree is: "<<sum<<endl;
    return 0;
}





/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector <int> getpath(TreeNode* root, vector <int> arr, TreeNode* p){
        if(root == nullptr){
            return arr;
        }
        if(root->val != p->val){
            arr.push_back(root->val);
            return arr;
        }
        else{
            arr.push_back(root->val);
        }
        arr.pop_back();
        return arr;
    }
    int lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector <int> arr1;
        vector <int> arr2;
        if(root == nullptr){
            return -1;
        }
        vector <int> v1 = getpath(root, arr1, p);
        vector <int> v2 = getpath(root, arr2, q);

        for(int i=0; i<min(v1.size(), v2.size()); i++){
            if(v1[i] != v2[i]){
                return v1[i];
                break;
            }
        }
        
    }
};