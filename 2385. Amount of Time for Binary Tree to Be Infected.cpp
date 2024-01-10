class Solution {
private:
    unordered_map<int, vector<int>> g;
    void dfs(TreeNode* root) {
        if (!root) 
            return;
        if (root->left) {
            g[root->val].push_back(root->left->val);
            g[root->left->val].push_back(root->val);
        }
        if (root->right) {
            g[root->val].push_back(root->right->val);
            g[root->right->val].push_back(root->val);
        }
        dfs(root->left);
        dfs(root->right);
    }
public:
    int amountOfTime(TreeNode* root, int start) {
        dfs(root);
        queue<int> q{{start}};
        unordered_set<int> s;
        int ans = -1;
        while(q.size()){
            ++ans;
            for(int n = q.size();n;--n){
                int i = q.front();
                q.pop();
                s.insert(i);
                for(int j : g[i]){
                    if(!s.count(j))
                        q.push(j);
                }
            }
        }
        return ans;
    }
};
