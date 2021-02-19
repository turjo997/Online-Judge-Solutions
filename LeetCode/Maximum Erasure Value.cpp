class Solution {
public:
    int maximumUniqueSubarray(vector<int>& v) {
        
    int n = v.size() ;     
    set<int> s;

    int ans = 0;

    int i = 0 , j =0 , su = 0;
    while(i<n){

        if(s.find(v[i]) == s.end()){
        s.insert(v[i]);
        su+=v[i];

        ++i;
        ans = max(su , ans);
        }else{
          su-=v[j];
          s.erase(v[j]);
          ++j;
        }
    }

        
        return ans;
    }
};
