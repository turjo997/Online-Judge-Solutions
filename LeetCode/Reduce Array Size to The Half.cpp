class Solution {
public:
    int minSetSize(vector<int>& v) {
        
    int n = v.size();
        
    vector<int> v1;

    map<int,int> m;
    map<int,int> :: iterator it;


    for(int i = 0 ; i<n ; ++i){
        m[v[i]]++;
    }

    for(it = m.begin() ; it!=m.end() ; ++it){
        v1.push_back(it->second);
    }

    sort(v1.begin() , v1.end());

    int ans = 1 , s = 0;
    for(int i = v1.size() - 1 ; i>=0 ; --i){

        s+=v1[i];
        if(s>=(n/2)){
            break;
        }else{
          ans++;
        }
    }
    
    return ans;
    }
};
