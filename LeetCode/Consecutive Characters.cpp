class Solution {
public:
    int maxPower(string s) {
        
    int j = 0 , mx = 0;
    for(int i = 0 ; i<s.size() ;){
        char ch = s[i];

        while(ch == s[j] && j<s.size()){
            ++j;
        }
        mx = max(mx , j-i);
        i = j;
    }

        
        return mx;
    }
};
