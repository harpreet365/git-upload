/*Find the Height of a Binary Tree*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = node->right = nullptr;
    return node;
}

int findHeight(Node* root) {
    if (root == nullptr) return 0;
    return 1 + max(findHeight(root->left), findHeight(root->right));
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout << "Height of the binary tree: " << findHeight(root) << endl;
    return 0;
}
