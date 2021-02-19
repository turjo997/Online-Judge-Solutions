class Solution {
public:
    string minWindow(string s, string t) {
        
     string ans;

     int n = s.size();
     map<char,int> m;

     for(int i = 0 ; i<t.size() ; ++i){
        m[t[i]]++;
     }

     int i = 0 , j = 0 , cnt = 0;

     int req = (int)t.size();

     int mn = INT_MAX ;
     int ind ;
        
     while(j<n){

         m[s[j]]--;

         if(m[s[j]]>=0)cnt++;

         while(cnt == req){

             if(j - i + 1 < mn){
                mn = j - i + 1;
                ind = i;
             }
             m[s[i]]++;
             if(m[s[i]] > 0)cnt--;
             ++i;
         }
         ++j;
     }

    if(mn == INT_MAX){
         return "";
     }
    else
    {
     for(int i = ind ; i<=ind+mn-1 ; ++i){
        ans+=s[i];
     }
     
        return ans ; 
    }
        
    }
};
