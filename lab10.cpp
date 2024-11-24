// #include <iostream>
// #include <queue>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) : data(val), left(nullptr), right(nullptr) {}
// };

// Node* insert(Node* root, int element) {
//     Node* temp = new Node(element);

//     if (root == nullptr) {
//         root = temp;
//         return root;
//     }

//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty()) {
//         Node* current = q.front();
//         q.pop();

//         if (current->left == nullptr) {
//             current->left = temp;
//             return root;
//         } else {
//             q.push(current->left);
//         }

//         if (current->right == nullptr) {
//             current->right = temp;
//             return root;
//         } else {
//             q.push(current->right);
//         }
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

// bool search(Node* root, int tar){
// 	if(root == nullptr){
// 		return false;
// 	}
// 	search(root->left, tar);
// 	if(root->data == tar){
// 		return true;
// 	} else {
// 		return false;
// 	}
// 	search(root->right, tar);
// }

// int main(){
// 	Node* root = nullptr;
// 	root = insert(root,1);
// 	root = insert(root,2);
// 	root = insert(root,2);
// 	root = insert(root,3);
// 	root = insert(root,4);
// 	root = insert(root,4);
// 	root = insert(root,3);
//     cout<<"Preorder: ";
//     preorder(root);
//     cout<<endl;
//     cout<<"Postorder: ";
//     postorder(root);
//     cout<<endl;
// 	bool res = search(root,1);
// 	if(res){
// 		cout<<"Found"<<" ";
// 	} else {
// 		cout<<"Not Found"<<" ";
// 	}
// 	return 0;
// }


#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int element) {
    Node* temp = new Node(element);

    if (root == nullptr) {
        root = temp;
        return root;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        if (current->left == nullptr) {
            current->left = temp;
            return root;
        } else {
            q.push(current->left);
        }

        if (current->right == nullptr) {
            current->right = temp;
            return root;
        } else {
            q.push(current->right);
        }
    }

    return root; 
}

bool isSymmetrichelp(Node* left, Node* right){
    if (left == nullptr || right ==nullptr)
    {
        return true;
    }
    if (left->data!=right->data)
    {
        return false;
    }
    else {
        return ((isSymmetrichelp(left->left, right->right)) && (isSymmetrichelp(left->right, right->left)));
    }
    
    
}
bool isSymmetric(Node* root){
    if (root == nullptr)
    {
        return true;
    }
    return isSymmetrichelp(root->left, root->right);
    
}

void inorder(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
	Node* root = nullptr;
	root = insert(root,1);
	root = insert(root,4);
	root = insert(root,3);
	root = insert(root,2);
	root = insert(root,5);
	root = insert(root,6);
	root = insert(root,8);
    inorder(root);
    cout<<endl;
    bool ans = isSymmetric(root);
    if (ans)
    {
        cout<<"Given Tree is Symmetric Tree"<<endl;
    } else {
        cout<<"Given Tree is not Symmetric Tree"<<endl;
    }
	return 0;
}


// Node* insertBST(Node* root, int element){
//     Node* temp = new Node(element);
// 	if(root == nullptr){
// 		root = temp;
// 	} else if(root->data >= element){
// 		root->left = insert(root->left, element);
// 	} else {
// 		root->right = insert(root->right, element);
// 	}
// 	return root;
// }

// int sum(Node* root1){
// 	int summ = 0;
// 	if(root1 == nullptr){
// 		return -1;
// 	}
// 	sum(root1->left);
// 	summ += root1->data;
// 	sum(root1->right);
// 	return summ;
// }


// bool isMirror(Node* left, Node* right){
// 	if(left == nullptr && right == nullptr){
// 		return true;
// 	} else if(left == nullptr && right != nullptr || right == nullptr && left != nullptr){
// 		return false;
// 	} else {
// 		return(left->data == right->data) &&
// 				isMirror(left->left, right->right) &&
// 				isMirror(left->right, right->left);
// 	}
// }