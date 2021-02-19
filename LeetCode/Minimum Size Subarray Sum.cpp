class Solution {
public:
    int minSubArrayLen(int k , vector<int>& v) {
        
    int i = 0 , j = 0 , s = 0;
        
    int mn = INT_MAX ;
    int n = v.size();
        
    while(i<n && j<n){

       s+=v[j];

       while(s >=k){

        mn = min(mn , j - i + 1);

        s-=v[i];

        ++i;

       }

     ++j;
    }
        
        if(mn == INT_MAX){ 
            return 0;
            
        }
        
        else{
            
            return mn;
        }

    }
};
