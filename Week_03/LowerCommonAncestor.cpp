/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr){
            return nullptr;
        }
        if(root == p){
            return p;
        }
        if(root == q){
            return  q;
        }
        TreeNode* lSon = lowestCommonAncestor(root->left, p, q);
        TreeNode* rSon = lowestCommonAncestor(root->right, p, q);
        if(lSon == nullptr){
            return rSon;
        }
        if(rSon == nullptr){
            return lSon;
        }
        if(lSon && rSon){
            return root;
        }

        return nullptr;
    }
};