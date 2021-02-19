class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& v, int k) {
    vector<int> a;

    map<int,int> m;
    map<int,int> :: iterator it;
        
    int n = v.size();
        
        
    for(int i = 0 ; i<n ; ++i){
       // cin >> v[i];
        m[v[i]]++;
    }

    for(it = m.begin(); it!=m.end() ; ++it){
        a.push_back(it->second );
    }

    sort(a.begin() , a.end());
    int ans = 0;
    for(int i = 0 ; i<a.size() && k>0; ++i){
        int x = min(a[i] , k);
        a[i]-= x;
        k-=x;
    }

    for(int i = 0 ; i<a.size(); ++i){
        if(a[i] > 0) ans++;
    }
        
        return ans;


    }
};
