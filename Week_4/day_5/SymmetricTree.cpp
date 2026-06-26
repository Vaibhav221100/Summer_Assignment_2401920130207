#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode*left;
    TreeNode*right;
};

class Solution{
public:
        bool ismirror(TreeNode*a,TreeNode*b){
            if(!a && !b) return true;
            if(!a || !b) return false;
            return a->val==b->val && ismirror(a->left,b->right) && ismirror(a->right,b->left);
        } 
        bool isSymmetric(TreeNode*root){
            if (!root) return true;
            return ismirror(root->left,root->right);
        }
};