class Solution {
public:
    int maxSubArray(vector<int>& a) {
    int msf=a[0];
    int meh=0;
    int n = a.size();    

    for(int i=0;i<n;i++){
        meh=meh+a[i];
        if(msf<meh){
            msf=meh;
        }
        if(meh<0){
            meh=0;
        }
    }
        
        return msf;
    }
};
