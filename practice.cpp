// // #include <iostream>
// // #include <stack>
// // using namespace std;

// // struct Node
// // {
// //     int data;
// //     Node *next;
// // };
// // Node *head;
// // Node *insert(Node *head, int x)
// // {
// //     Node *temp1 = new Node();
// //     temp1->data = x;
// //     temp1->next = nullptr;
// //     if (head == nullptr)
// //     {
// //         head = temp1;
// //     }
// //     else
// //     {
// //         Node *newnode = head;
// //         while (newnode->next != nullptr)
// //         {
// //             newnode = newnode->next;
// //         }
// //         newnode->next = temp1;
// //     }
// //     return head;
// // }
// // void Print(Node *head)
// // {
// //     Node *temp = head;
// //     while (temp != nullptr)
// //     {
// //         cout << temp->data << " ";
// //         temp = temp->next;
// //     }
// //     cout << endl;
// // }

// // Node* reverse(Node *head)
// // {
// //     Node *temp = head;
// //     if (temp == nullptr)
// //     {
// //         return head;
// //     }
// //     stack<Node*> s;
// //     while (temp != nullptr)
// //     {
// //         s.push(temp);
// //         temp = temp->next;
// //     }
// //     temp = s.top();
// //     head = temp;
// //     s.pop();
// //     while (!s.empty())
// //     {
// //         temp->next = s.top();
// //         s.pop();
// //         temp = temp->next;
// //     }
// //     temp->next = nullptr;
// //     return head;
// // }
// // int main()
// // {
// //     head = nullptr;
// //     head = insert(head, 1);
// //     head = insert(head, 2);
// //     head = insert(head, 3);
// //     head = insert(head, 4);
// //     Print(head);
// //     head = reverse(head);
// //     Print(head);
// //     return 0;
// // }

// // #include<iostream>
// // #include<stack>
// // #include<cstring>
// // #include<algorithm>
// // using namespace std;

// // void reverse(char arr[], int size){
// //     stack <char> s;
// //     for (int i = 0; i < size; i++)
// //     {
// //         s.push(arr[i]);
// //     }
// //     for (int i = 0; i < size; i++)
// //     {
// //         arr[i] = s.top();
// //         s.pop();
// //     }

// // }
// // int main() {
// //     char a[51];
// //     cout<<"Enter a phrase: ";
// //     cin.getline(a,51);
// //     reverse(a,strlen(a));
// //     cout<<"Output: "<<a<<endl;
// //     return 0;
// // }

// #include<iostream>
// #include<stack>
// #include<string>
// using namespace std;

// bool check(char open, char close){
//     if (open == '(' && close == ')')
//     {
//         return true;
//     }
//     else if (open == '{' && close == '}')
//     {
//         return true;
//     }
//     else if (open == '[' && close == ']')
//     {
//         return true;
//     }
//     else{
//         return false;
//     }

// }
// bool arebracketsvalid(string s){
//     stack <char> S;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '{' || s[i] == '(' || s[i] == '[')
//         {
//             S.push(s[i]);
//         }
//         else if(s[i] == '}' || s[i] == ')' || s[i] == ']')
//         {
//             if (S.empty() || !check(S.top(), s[i])){
//                 return false;
//             }
//             S.pop();
//         }
//     }
//     if (S.empty())
//     {
//         return true;
//     } else {
//         return false;
//     }

// }
// int main() {
//     string s;
//     cout<<"Enter brackets: ";
//     cin>>s;
//     if(arebracketsvalid(s)){
//         cout<<"Balance. ";
//     } else {
//         cout<<"Unbalanced. ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* root = nullptr;
// Node* insert(Node* root, int x){
//     Node* temp = new Node();
//     temp->data = x;
//     temp->left = nullptr;
//     temp->right = nullptr;
//     if (root==nullptr)
//     {
//         root = temp;
//     } else {
//         Node* temp1 = root;
//         if (x<=temp1->data)
//         {
//             temp1->left = insert(temp1->left,x);
//         } else {
//             temp1->right = insert(temp1->right,x);
//         }
//     }
//     return root;
// }

// bool Search(Node* root, int x){
//     if (root==nullptr)
//     {
//         return false;
//     }
//     else if (root->data==x)
//     {
//         return true;
//     } else if (x<=root->data)
//     {
//         Search(root->left,x);
//     } else {
//         Search(root->right,x);
//     }
// }

// void Print(Node* root){
//     if (root==nullptr)
//     {
//         return;
//     }
//     Print(root->left);
//     cout<<root->data<<" ";
//     Print(root->right);
// }

// int main() {
//     root = nullptr;
//     root = insert(root, 15);
//     root = insert(root, 10);
//     root = insert(root, 20);
//     root = insert(root, 9);
//     root = insert(root, 25);
//     root = insert(root, 16);
//     root = insert(root, 11);
//     Print(root);
//     cout<<endl;
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     bool result = Search(root, n);
//     if (result)
//     {
//         cout<<"Found"<<endl;
//     } else {
//         cout<<"Not Found"<<endl;
//     }

//     return 0;
// }

// #include <iostream>
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
//     Node *newnode = new Node();
//     newnode->data = x;
//     newnode->left = nullptr;
//     newnode->right = nullptr;
//     if (root == nullptr)
//     {
//         root = newnode;
//         return root;
//     }
//     if (x <= root->data)
//     {
//         root->left = insert(root->left, x);
//     }
//     else
//     {
//         root->right = insert(root->right, x);
//     }
//     return root;
// }

// Node *minimum(Node *root)
// {
//     if (root == nullptr)
//     {
//         return root;
//     }
//     else if (root->left == nullptr)
//     {
//         return root;
//     }
//     minimum(root->left);
// }
// int maxi(int n1, int n2){
//     if (n1>n2)
//     {
//         return n1;
//     } else {
//         return n2;
//     }
// }
// int height(Node* root){
//     if (root==nullptr)
//     {
//         return -1;
//     } else {
//         return maxi(height(root->left),height(root->right))+1;
//     }
// }
// bool Searched(Node *root, int x)
// {
//     if (root == nullptr)
//     {
//         return false;
//     }
//     else if (root->data == x)
//     {
//         return true;
//     }
//     else
//     {
//         if (x < root->data)
//         {
//             Searched(root->left, x);
//         }
//         else
//         {
//             Searched(root->right, x);
//         }
//     }
// }
// Node *deleted(Node *root, int x)
// {
//     bool ans = Searched(root, x);
//     if (ans)
//     {
//         if (root == nullptr)
//         {
//             return root;
//         }
//         else if (x < root->data)
//         {
//             root->left = deleted(root->left, x);
//         }
//         else if (x > root->data)
//         {
//             root->right = deleted(root->right, x);
//         }
//         else
//         {
//             Node *temp = root;
//             if (temp->left == nullptr && temp->right == nullptr)
//             {
//                 delete temp;
//                 root = nullptr;
//             }
//             else if (root->left == nullptr)
//             {
//                 root = root->right;
//                 delete temp;
//             }
//             else if (root->right == nullptr)
//             {
//                 root = root->left;
//                 delete temp;
//             }
//             else
//             {
//                 Node *min = minimum(root->right);
//                 root->data = min->data;
//                 root->right = deleted(root->right, min->data);
//             }

//             return root;
//         }
//     }
//     else
//     {
//         cout << "This number is not in tree" << endl;
//     }
// }

// void Print(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     Print(root->left);
//     cout << root->data << " ";
//     Print(root->right);
// }
// int main()
// {
//     root = insert(root, 15);
//     root = insert(root, 10);
//     root = insert(root, 20);
//     root = insert(root, 9);
//     root = insert(root, 25);
//     root = insert(root, 11);
//     root = insert(root, 16);
//     Print(root);
//     cout << endl;
//     deleted(root, 150);
//     Print(root);
//     cout << endl;
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     bool res = Searched(root, n);
//     if (res)
//     {
//         cout << "Found" << endl;
//     }
//     else
//     {
//         cout << "Not Found" << endl;
//     }
//     cout<<"The height of tree is: "<<height(root)<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// class Graph
// {
// private:
//     int numvertices;
//     vector<vector<int>> adjmatrix;

// public:
//     Graph(int vertices)
//     {
//         numvertices = vertices;
//         adjmatrix.resize(vertices, vector<int>(vertices, 0));
//     }

//     void addedge(int i, int j)
//     {
//         if (i >= 0 && i < numvertices && j >= 0 && j < numvertices)
//         {
//             adjmatrix[i][j] = 1;
//             adjmatrix[j][i] = 1;
//         }
//     }
//     void removeedge(int i, int j)
//     {
//         if (i >= 0 && i < numvertices && j >= 0 && j < numvertices)
//         {
//             adjmatrix[i][j] = 0;
//             adjmatrix[j][i] = 0;
//         }
//     }

//     void display()
//     {
//         for (int i = 0; i < numvertices; i++)
//         {
//             for (int j = 0; j < numvertices; j++)
//             {
//                 cout << adjmatrix[i][j] << " ";
//             }
//             cout<<endl;
//         }
//     }

//     void BFS(int startindex)
//     {
//         queue<int> q;
//         vector<bool> visited(numvertices, false);

//         visited[startindex] = true;
//         q.push(startindex);
//         while (!q.empty())
//         {
//             int vertex = q.front();
//             cout << vertex << " ";
//             q.pop();

//             for (int i = 0; i < numvertices; i++)
//             {
//                 if (adjmatrix[vertex][i] == 1 && !visited[i])
//                 {
//                     visited[i] = true;
//                     q.push(i);
//                 }
//             }
//         }
//         cout << endl;
//     }
// };
// int main()
// {
//     Graph g(5);
//     g.addedge(0, 1);
//     g.addedge(0, 2);
//     g.addedge(1, 2);
//     g.addedge(2, 3);
//     g.addedge(3, 1);
//     g.addedge(3, 4);
//     g.display();
//     cout << endl;
//     g.removeedge(3, 4);
//     g.display();
//     cout<<endl;
//     g.BFS(0);
//     return 0;
// }


// #include<iostream>
// using namespace std;

// struct Node{
//     int value;
//     Node* next;
// };

// Node* head = nullptr;
// Node* insertatbegin(Node* head, int x){
//     Node* temp = new Node();
//     temp->value = x;
//     temp->next = head;
//     head = temp;
//     return head;
// }
// Node* insertatbegin(Node* head, int x){
//     Node* temp = new Node();
//     temp->value = x;
//     temp->next = nullptr;
//     if (temp == nullptr)
//     {
//         head = temp;
//     } else {
//         temp->next = head;
//         head = temp;
//     }
//     return head;
// }
// void display(Node* head){
//     Node* temp = head;
//     while (temp != nullptr)
//     {
//         cout<<temp->value<<" ";
//         temp = temp->next;
//     }
// }
// int main() {
//     Node* head = nullptr;
//     head = insertatbegin(head, 4);
//     head = insertatbegin(head, 3);
//     head = insertatbegin(head, 2);
//     head = insertatbegin(head, 1);
//     display(head);
//     return 0;
// }



#include <iostream>
#include <algorithm> 
using namespace std;

void flip(int array[], int k) {
    reverse(array, array + k);
}

int max_ind(int array[], int n) {
    int max_index = 0;
    for (int i = 1; i < n; ++i) {
        if (array[i] > array[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}

void sort(int array[], int n) {
    int flips[2 * n];
    int flip_count = 0;

    for (int size = n; size > 1; --size) {
        int max_index = max_ind(array, size);
        
        if (max_index != size - 1) {
            if (max_index != 0) {
                flip(array, max_index+1);
                flips[flip_count++] = max_index + 1;
            }
            flip(array, size);
            flips[flip_count++] = size;
        }
    }
    if (n > 1) {
        flips[flip_count++] = 1; // Flip the last single element (1-based)
        flips[flip_count++] = 2; // Flip the second last element (1-based)
    }
    cout << "Flips: ";
    for (int i = 0; i < flip_count; ++i) {
        cout << flips[i] << " ";
    }
    cout << endl;
}

void print_array(int array[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {3, 2, 4, 1};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Original array: ";
    print_array(array, n);
    sort(array, n);
    cout << "Sorted array: ";
    print_array(array, n);
    return 0;
}