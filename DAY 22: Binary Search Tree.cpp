#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <algorithm>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};

class BST{
    public:
    
    TreeNode* root;
    
    BST() : root(nullptr){}
    
    TreeNode* insert (TreeNode* root, int val){
        if (root == nullptr){
            root = new TreeNode(val);
        }else if (val<root->val){
            root->left = insert(root->left, val);
        }else{
            root->right = insert(root->right, val);
        }
        
        return root;
    }
    
    int getHeight(TreeNode* root){
        if (root == nullptr){
            return -1;
        }
        
        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        
        return 1 + max(leftHeight, rightHeight);
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    BST tree;
    int n;
    cin>>n;
    
    for (int i=0; i<n; ++i){
        int val;
        cin>>val;
        tree.root = tree.insert(tree.root, val);
    }   
    
    int height = tree.getHeight(tree.root);
    cout<<height<<endl;
    
    return 0;
}
