class Solution {
public:
    int maxOperations(vector<int>& v, int k) {
        
    sort(v.begin() , v.end());

    int n = v.size();    
        
    int i = 0 , j = n-1 , ans = 0;

    while(i<j){

        if(v[i]+v[j] == k){
            ans++;
            ++i, --j;
        }
        else if(v[i]+v[j]<k){

            ++i;
        }else{
         --j;
        }

    }
        
        return ans;
    }
};
