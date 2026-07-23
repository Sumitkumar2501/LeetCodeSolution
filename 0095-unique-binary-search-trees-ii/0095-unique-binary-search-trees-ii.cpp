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
    vector<TreeNode*> generateTrees(int n) {
        if(n==0){
            return {};
        }
        return build(1,n);
    }

    vector<TreeNode*> build(int start,int end){
        vector<TreeNode*> allTrees;

        if(start>end){
            allTrees.push_back(nullptr);
            return allTrees;
        }

        for(int i=start;i<=end;i++){
            vector<TreeNode*> leftTrees=build(start,i-1);
            vector<TreeNode*> rightTrees=build(i+1,end);

            for(TreeNode* left:leftTrees){
                for(TreeNode* right:rightTrees){
                    TreeNode* root=new TreeNode(i);
                    root->left=left;
                    root->right=right;
                    allTrees.push_back(root);
                }
            }
        }
        return allTrees;
    }
};