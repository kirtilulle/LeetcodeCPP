class Solution {
public:
    int minSteps(string s, string t) {
        int map1[26] = {0};
        int map2[26] = {0};
        for(int i=0;i<s.length();i++){
            map1[s[i]-'a']++;
            map2[t[i] - 'a']++;
        }
        int count = 0;
        for(int i=0;i<26;i++){
            if(map2[i]>map1[i])
                count+= map2[i]- map1[i];
        }
        return count;
    }
};
