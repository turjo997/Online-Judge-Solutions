class Solution {
public:
    int countGoodTriplets(vector<int>& v, int a, int b, int c) {
        
    int n = v.size();
    int cnt = 0;
    for(int i = 0 ; i<n-2; ++i){
         for(int j = i+1 ; j < n-1; ++j){
             for(int k = j+1 ; k<n ; ++k){
                if((abs(v[i] - v[j])<=a) && (abs(v[j] - v[k])<=b) && (abs(v[i] - v[k])<=c))
                {
                    cnt++;
                   // cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
                   // break;
                }
             }
         }
    }
     return cnt;

    }
};
