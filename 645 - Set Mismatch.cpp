class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> count(nums.size()+1);
        int dup = -1, missing = -1;

        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }

        for(int i = 1; i < count.size(); i++){
            if(count[i] == 0) missing = i;
            else if(count[i] == 2) dup = i;
        }
        
        return vector<int> {dup, missing};
    }
};
