class Solution {
public:
    string longestPalindrome(string s) {
        
    string s1;
    int n  = s.size();
        
    if(n == 1){
        return s;
    }    

    int dp[n][n];

    memset(dp, 0 , sizeof(dp));

    int mx_l = 1, st = 0 , en = 0;

    for(int i = 0 ; i<n ; ++i){
        dp[i][i] = 1;
        if(i!=0){
            if(s[i] == s[i-1]){
                dp[i-1][i] = 1;
                mx_l = 2;
                st = i-1;
                en = i;
            }
        }
    }


    int k = n-2;
    int i = 2;
    while(k--){
          for(int j = 0 ; j<n-i; j++){
            int l = i + 1;
            if(s[j] == s[j+i] && dp[j+1][j+i-1] == 1 && j+i < n){
                dp[j][j+i] = 1;
                if (l > mx_l){
                    mx_l = l;

                    en = j+i ;
                    st = j;
                }
            }
          }
          ++i;
    }

   

    for(int i = st; i<=en ;++i){
        s1+=s[i];
    }
    
    return s1;
 
    }
};
