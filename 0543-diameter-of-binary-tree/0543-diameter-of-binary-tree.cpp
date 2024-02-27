/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int HeightOfTree(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        int left_sub = HeightOfTree(root->left);
        int right_sub = HeightOfTree(root->right);
        int ans = max(left_sub,right_sub)+1;
        return ans;
        
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        
        int left_sub = diameterOfBinaryTree(root->left);
        int right_sub = diameterOfBinaryTree(root->right);
        int op3 = HeightOfTree(root->left)+HeightOfTree(root->right);
        int max_val = max(op3,max(left_sub,right_sub));
        
        return max_val;
    }
};