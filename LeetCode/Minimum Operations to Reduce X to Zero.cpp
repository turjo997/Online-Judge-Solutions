class Solution {
public:
    int minOperations(vector<int>& v, int k) {

    int n = v.size() , kk = k;
    
    if(n == 1 && v[0] == k){
        return 1;
    }else if(n == 1 && v[0] != k){
        return -1;
    }else{

    vector<int>  psum , ssum;
    int s = v[0];

    psum.push_back(s);

    for(int i = 1 ; i < n-1 ; ++i){
        s+=v[i];
        psum.push_back(s);
    }

    int j = v.size() -1 ;
    int s1 = 0;
    int mn = INT_MAX;
    while(j>0){
       s1+=v[j];

       if(k-s1 == 0){
         mn = min(mn , n-j);
       }else{
     bool ok = binary_search(psum.begin() , psum.end() , (k-s1));
     if(ok){
        int ind = upper_bound(psum.begin() , psum.end() , (k-s1)) - psum.begin()-1;
        mn = min(mn , ind + 1 + n-j);
     }
     }
     --j;

    }

    int s2 = v[v.size() - 1];
    ssum.push_back(s2);
    
    for(int i = n-2 ; i>0 ; --i){
        s2+=v[i];
        ssum.push_back(s2);
    }
    int i = 0 ;
    int s3 = 0;
    int mn1 = INT_MAX;
    while(i<n-1){
         s3+=v[i];
       if(kk-s3 == 0){
         mn1 = min(mn1 , i+1);
       }else{
     bool ok = binary_search(ssum.begin() , ssum.end() , (kk-s3));
     if(ok){
        int ind = upper_bound(ssum.begin() , ssum.end() , (kk-s3)) - ssum.begin()-1;
        mn1 = min(mn1 , ind + 1 + i+1);
     }
     }
     ++i;
    }

    mn = min(mn , mn1);


   if(mn == INT_MAX){
       mn = -1;
   }

   return mn;
    }


    }
};
