class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int prev = 0;

        for (const string& row : bank) {
            const int ones = ranges::count(row, '1');
            if (ones > 0) {
                ans += prev * ones;
                prev = ones;
            }
        }
    return ans;
    }
};
