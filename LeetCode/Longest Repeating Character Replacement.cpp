class Solution {
public:
    int characterReplacement(string s, int k) {
    int n = s.size();
    int i,j;
    i = j = 0;

    map<char,int> m ;

    int mf , ml ;

    mf = ml = 0 ;

    while(i<n && j <n){

        m[s[j]]++;
        mf = max (mf , m[s[j]]);

        int x = (j - i + 1) - mf;

        if(x > k){
            m[s[i]]--;
            ++i;
        } else{
             ml = max (ml , j-i+1);
        }

        ++j;
    }
        
        return ml ;
    }
};
