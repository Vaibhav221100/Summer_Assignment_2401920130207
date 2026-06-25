#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
 };

class Solution {
public:
    int maxi=INT_MIN;
    int dfs(TreeNode*root){
        if (!root) return 0;
        int left=max(0,dfs(root->left));
        int right=max(0,dfs(root->right));
        maxi=max(maxi,left+root->val+right);
        return root->val + max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return maxi;
    }
};