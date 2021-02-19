class Solution {
public:
    int maxVowels(string s, int k) {
        
    int n = s.size();

    int ans = 0;

    for(int i = 0 ; i<k ; ++i){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'
           || s[i] == 'u'){
            ans++;
           }
    }

    int mx = ans;

    int c = 0;

    for(int i = k;i<n ; ++i){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'|| s[i] == 'u'){
              c++;
        }
        if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o'|| s[i-k] == 'u'){
           ans = ans + c - 1;
           c = 0;
        }else if(s[i-k] != 'a' || s[i-k] != 'e' || s[i-k] != 'i' || s[i-k] != 'o'|| s[i-k] != 'u'){
           ans = ans + c;
           c = 0;
        }

        mx = max(mx , ans);
    }
        
        return mx;

    }
};
