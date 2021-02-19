class Solution {
public:
    int numMatchingSubseq(string t , vector<string>& v) {
      
        
     unordered_map<string ,int> m;  
     unordered_map<string ,int> :: iterator it;

        int n2 = v.size();
        
        
      for(int i = 0; i<n2;++i){ 
        m[v[i]]++;
      }

    int ans = 0;

    for(it=m.begin() ; it!=m.end(); ++it){

      string s = it->first;

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

        if(cnt == n){
            ans = ans + it->second;
        }


    }

    return ans;

    }
};
