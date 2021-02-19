class Solution {
public:
    bool isSubsequence(string s, string t) {
         int n = s.size();
    int n1 = t.size();

    int i = 0, j =0 , cnt = 0;

    while(i<n && j<n1){

        if(s[i] == t[j]){
          cnt++;
          ++i,++j;
        }else{
          ++j;
        }
    }

    if(cnt == n) return true;
    else         return false;
    }
};
