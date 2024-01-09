class Solution {
private:
    void preorder(TreeNode*root,vector<int>&leafNodes){
        if(root==NULL){
            return;
        }
        if(root && root->left == NULL && root->right== NULL){
            leafNodes.push_back(root->val);
        }
        preorder(root->left,leafNodes);
        preorder(root->right,leafNodes);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leafNodes1,leafNodes2;
        preorder(root1,leafNodes1);
        preorder(root2,leafNodes2);
        int n = leafNodes1.size();
        if(leafNodes1 == leafNodes2){
          return true;
        }
        return false;
    }
};
