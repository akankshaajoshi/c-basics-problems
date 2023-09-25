#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

void inorder(TreeNode<int> *root, vector<int>& sorted){
    if(root==NULL){
        return ;
    }
    inorder(root->left, sorted);
    sorted.push_back(root->data);
    inorder(root->right, sorted);
}


TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int> sorted;
    inorder(root, sorted);
    int n = sorted.size();

    //store inorder - all the nodes in tree
    TreeNode<int>* newRoot = new TreeNode<int>(sorted[0]);
    TreeNode<int>* curr = newRoot;

    for(int i = 1; i<n; i++){
        TreeNode<int>* temp = new TreeNode<int>(sorted[i]);
        curr->left = NULL;
        curr->right = temp;
        
        curr = temp;
    }

    curr->left = NULL;
    curr->right = NULL;

    return newRoot;
}
