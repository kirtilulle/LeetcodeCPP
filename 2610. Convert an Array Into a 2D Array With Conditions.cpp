class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int, int> freq;
        for(auto i : nums){
            freq[i]++;
            if(ans.size() < freq[i])
             ans.push_back({});
            ans[freq[i] - 1].push_back(i);
        }
        return ans;
    }
};
