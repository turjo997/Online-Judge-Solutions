class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
        
    int n = v.size();
        
    map<int,int> m;

    m[0]++;

    int s = 0 , ans = 0;

    for(int i = 0; i<n ;++i){
        s+=v[i];
        if(m.find(s-k) != m.end()){
            ans+=m[s-k];
        }
        m[s]++;
    }
        
        return ans ; 
    }
};
