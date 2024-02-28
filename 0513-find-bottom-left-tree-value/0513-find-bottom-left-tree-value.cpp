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
    
    
    int findBottomLeftValue(TreeNode* root) 
    {
        int leftmostVal= 0;
        queue<TreeNode*> q;
        q.push(root);
        // leftmostVal = root->val;
        
        while(!q.empty())
        {
            TreeNode* frontnode = q.front();
            q.pop();
            
            leftmostVal = frontnode->val;
            if(frontnode->right)
                q.push(frontnode->right);
            
            if(frontnode->left)
                q.push(frontnode->left);
            
        }
        
        return leftmostVal;
        
    }
};