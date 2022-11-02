class Solution {
public:
    bool canJump(vector<int>& v) {
    
     int n = v.size();
     int ind = n-1;

     for(int i = n-2 ; i >= 0 ; --i){
         if (i + v[i] >= ind){
            ind = i;
         }
     }

     if(ind == 0){
        return true;
     }else{
       return false;
     }

    }
};
