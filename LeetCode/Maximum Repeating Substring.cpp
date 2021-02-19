class Solution {
public:
    int maxRepeating(string s, string t) {
        
       
          vector<string> v;
          vector<int> an;

          v.push_back(t);
          int ans = 0;
        
         int n = t.size();

     for(int i=0;i<v.size();++i){

                for(int j=0;j+v[i].size()<=s.size();++j){

                    if(s.substr(j,v[i].size())==v[i]){
                        an.push_back(j);
                          j = j + n -1;
                    }

                }
         }

         if(an.size() == 0){
            return 0;
         }

         if(an.size() == 1){
            return 1;
         }
         else{
         ans = 1;
      
         int mx = 0;
         an.push_back(0);
         for(int i = 0; i<an.size()-1 ;++i){
            if(an[i+1] - an[i] == t.size())ans++;
            else{
                mx = max(mx , ans);
                ans = 1;
            }
         }

         return mx;

         }
         
        
    }
};
