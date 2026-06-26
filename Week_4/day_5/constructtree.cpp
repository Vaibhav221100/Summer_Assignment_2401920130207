#include<bits/stdc++.h>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    TreeNode* splitTree(vector<int> preorder,unordered_map<int,int> indexmp,int rootindex,int left,int right){
        TreeNode* root= new TreeNode(preorder[rootindex]);
        //for splitting left and right
        int mid=indexmp[root->val];
        if (mid>left){
            root->left=splitTree(preorder,indexmp,rootindex+1,left,mid-1);
        }
        if (mid<right){
            root->right=splitTree(preorder,indexmp,rootindex+mid-left+1,mid+1,right);
        }
        return root;

    }


    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int ,int> indexmp;
        for(int i=0;i<inorder.size();i++){
            indexmp[inorder[i]]=i;
        }
        return splitTree(preorder,indexmp,0,0,inorder.size()-1);
    }
};