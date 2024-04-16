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
    TreeNode* add(TreeNode *node,int val,int d, int curr)
    {
        if(node == NULL)
            return NULL;
        
        else if(curr == d-1)
        {
            TreeNode *Ltree = node->left;
            TreeNode *Rtree = node->right;
            
            node->left = new TreeNode(val);
            node->right = new TreeNode(val);
             
            node->left->left = Ltree;
            node->right->right = Rtree;
            
            return node;
        }
        
        node->left = add(node->left,val,d,curr+1);
        node->right = add(node->right,val,d,curr+1);
        
        return node;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) 
    {
        if(depth==1)
        {
            TreeNode *node = new TreeNode(val);
            node->left = root;
            return node;
        }
        
        return add(root,val,depth,1);
    }
};