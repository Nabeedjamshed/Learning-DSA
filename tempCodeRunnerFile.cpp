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