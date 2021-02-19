class Solution {
public:
    vector<int> twoSum(vector<int>& v, int k) {
   
    int n = int(v.size());    
        
    vector<pair<int,int>> v1;
        
    for(int i = 0; i<n;++i){
        v1.push_back(make_pair(v[i] , i));
     }
        
      sort(v1.begin() , v1.end());
        
        
    vector<int> a;
    
   
        
    int i = 0 , j = n-1;
    while(i<n && j>=0){

        if(v1[i].first + v1[j].first == k){
            a.push_back(v1[i].second);
            a.push_back(v1[j].second);
            break;
        }else if(v1[i].first + v1[j].first > k){
           --j;
        }else{
          ++i;
        }
    }

        return a;


    }
};
