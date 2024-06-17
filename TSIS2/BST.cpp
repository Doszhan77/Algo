#include <iostream>
using namespace std;

class TreeNode 
{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BST 
{
public:
    TreeNode* root;
    BST() : root(nullptr) {}

    TreeNode* insert(TreeNode* node, int data) 
    {
        if (node == nullptr) 
        {
            return new TreeNode(data);
        }
        if (data < node->data)
            node->left = insert(node->left, data);
        else
            node->right = insert(node->right, data);
        return node;
    }

    void inorder(TreeNode* node) 
    {
        if (node == nullptr) return;
        inorder(node->left);
        
        cout << node->data << " ";
        inorder(node->right);
    }
};

int main() {
    BST tree;
    tree.root = tree.insert(tree.root, 50);
    tree.insert(tree.root, 30);
    tree.insert(tree.root, 20);
    tree.insert(tree.root, 40);
    tree.insert(tree.root, 70);
    tree.insert(tree.root, 60);
    tree.insert(tree.root, 80);

    tree.inorder(tree.root);
    return 0;
}