class Solution {
public:
    int jump(vector<int>& v) {
        
        int n = v.size();

        if(n < 1){
            return 0;
        }
        vector<int>  a (n , n+100);

        a[0] = 0;
        for(int i = 1 ; i < n ; ++i){
            for(int j = 0 ; j < i ; ++j){

                    if (j + v[j] >= i){
                        a[i] = min(a[i] , a[j] + 1);
                    }
            }
        }

        return a[n-1];
    }
};
