class Solution {
public:
    int stoneGameVI(vector<int>& alice, vector<int>& bob) {
        
        
    int n = alice.size();
    vector<pair<int,int>> v;
        
    vector<int> v1 , v2;

      for(int i = 0 ; i<n ; ++i){
            v.push_back(make_pair(alice[i] + bob[i], i));
        }


    sort(v.begin() , v.end());

    for(int i = 0; i<n ; ++i){
        v1.push_back(alice[v[i].second]);
        v2.push_back(bob[v[i].second]);
    }


    int ans1 = 0 , ans2 = 0;
    for(int i = n - 1; i>=0; i-=2){
        ans1+=v1[i];
    }

     for(int j = n -2 ; j>=0; j-=2){
        ans2+=v2[j];
    }
    
    if(ans1 > ans2) return 1;
    else if(ans1 < ans2) return -1;
    else              return 0;

    }
};
