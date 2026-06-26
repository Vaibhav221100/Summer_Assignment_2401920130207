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
class Codec {
public:

    // Encodes a tree to a single string. using level order traversal BFS
    string serialize(TreeNode* root) {
        if (!root) return "";
        string sb;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode*node=q.front();
            q.pop();
            if (!sb.empty()) sb.push_back(',');
            if (node==nullptr) sb.push_back('n');
            else{
                sb.append(to_string(node->val));
                q.push(node->left);
                q.push(node->right);
            }
        }
        return sb;
    }

    // Decodes your encoded data to tree.
  TreeNode* deserialize(string data) {
    if (data.empty())
        return nullptr;

    vector<string> tokens;
    string temp;

    for (char c : data) {
        if (c == ',') {
            tokens.push_back(temp);
            temp.clear();
        } else {
            temp += c;
        }
    }
    tokens.push_back(temp);

    TreeNode* root = new TreeNode(stoi(tokens[0]));
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;

    while (!q.empty() && i < tokens.size()) {
        TreeNode* node = q.front();
        q.pop();

        // Left child
        if (tokens[i] != "n") {
            node->left = new TreeNode(stoi(tokens[i]));
            q.push(node->left);
        }
        i++;

        // Right child
        if (i < tokens.size() && tokens[i] != "n") {
            node->right = new TreeNode(stoi(tokens[i]));
            q.push(node->right);
        }
        i++;
    }

    return root;
}
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));