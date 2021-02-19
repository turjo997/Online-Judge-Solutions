class Solution {
public:
    bool isPowerOfTwo(long long n) {
        
     
        if(n==1 || n==2){
            return true;
        }
        else if(n==0){

             return false;
        }

        else{
        long long x,i=1.0,f=1;

        while(1){
              x=pow(2,i);
             if(x==n){
                break;
             }else if(x<n){
                i++;
             }else{
               f=0;
               break;
             }
        }

         if(f==0)  return false;
         else      return true;
        // cout<<x<<endl;

        }


    }
};
