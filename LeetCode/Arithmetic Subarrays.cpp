class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& v, vector<int>& l, vector<int>& r) {
          int m = l.size();
        
            vector<bool> ans;
        
        for(int i = 0 ; i<m ; ++i){
            vector<int> v1;
            for(int a = l[i] ; a<=r[i] ;++a){
                v1.push_back(v[a]);
            }

            sort(v1.begin(), v1.end());

            int x = abs(v1[0] - v1[1]);

            bool ok =false;

            for(int j = 0 ; j<v1.size() - 1; ++j){
              if(v1[j+1] - v1[j] !=x){
                ok = true;
                break;
              }
            }

            if(ok)  ans.push_back(false);
            else     ans.push_back(true);
    }
        
        return ans;
        
        


    }
};
