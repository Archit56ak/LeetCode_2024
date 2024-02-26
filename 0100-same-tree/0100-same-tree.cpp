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
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if(p==NULL && q==NULL)
            return true;
        
        if(p==NULL && q!=NULL)
            return false;
        
        if(p!=NULL && q==NULL)
            return false;
        
        bool left_sub = isSameTree(p->left,q->left);
        bool right_sub = isSameTree(p->right,q->right);
        bool same_val;
        if(p->val==q->val) 
            same_val = true;
        else same_val = false;
        
        return (left_sub && right_sub && same_val);
    }
};