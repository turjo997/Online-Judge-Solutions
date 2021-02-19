class Solution {
public:
    bool closeStrings(string s, string t) {
         
     int n = s.size() , n1 = t.size();
    
    if(n!=n1){
         return false;
    }
    
    else{
        
        int f[26] = {0};
        int f1[26] = {0};
        
    
        for(int i = 0 ; i<n ; ++i){
            f[s[i] - 'a']++;
            f1[t[i] - 'a']++;
        }
        
       for(int i = 0 ; i<26 ; ++i){
          if(f[i] > 0 != f1[i] > 0) return false;
       }
        
      
          sort(f+0, f+26);
          
          sort(f1+0, f1+26);
          
          bool ok = false;
          
          for(int i = 0 ; i<26 ; ++i){
            if(f1[i] != f[i]){
              
                return false;
            }
          } 
          
          
          return true;
        
    }
    }
};
