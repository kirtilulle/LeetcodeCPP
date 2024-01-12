class Solution {
private:
    bool is_vowel(char c) {
         return (c=='a' || c == 'i' || c=='e' || c=='u' || c=='o');
    }
public:
    bool halvesAreAlike(string s){
        int count1 = 0 , count2 = 0 ;
        for(int i = 0; i<s.size() ; i++) {
            if( is_vowel(s[i]  | 32)) {
                if(i<s.size() /2 ) 
                    count2 ++ ;
                else 
                    count1 ++ ;
            }
        }
        return count1 == count2 ;
    }
};
