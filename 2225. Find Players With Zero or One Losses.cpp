class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int> win;
        map<int, int> lose;
        for(auto &m: matches){
            win.insert(m[0]);
            lose[m[1]]++;
        }
        vector<int> oneLose;
        for(auto &[p, cnt]: lose){
            if(cnt == 1) oneLose.push_back(p);
            win.erase(p);
        }
        return {vector<int>(begin(win), end(win)), oneLose};
    }
};
