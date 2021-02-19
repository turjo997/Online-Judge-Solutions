class Solution {
    
    
public:
    
   int getWinner(vector<int>& v, int k) {
    
    map<int ,int> m;
    map<int ,int> ::iterator it;

    deque<int> dq;

    int mx = 0;
    for(int i = 0 ; i<v.size() ; ++i){
        //int x ; cin >> x;
        dq.push_back(v[i]);

        mx = max(mx , v[i]);
    }


    while(1){

            if(dq[0] == mx){
                //cout<<mx<<endl;
                return mx ;
                //break;
            }else{

      for(int i = 0 ;i<1;++i){

         m[max(dq[i],dq[i+1])]++;
         if(dq[i] > dq[i+1]){
            int x = dq[i] , y = dq[i+1];
            dq.pop_front();
            dq.pop_front();
            dq.push_front(x);
            dq.push_back(y);
            }else{
              int x = dq[i];
              dq.pop_front();
              dq.push_back(x);

            }
      }


          bool ok = false;

          for(it = m.begin() ; it!=m.end();++it){
             if(it->second == k){
                //cout<<it->first<<endl;

               // return it->first;
                ok = true;
                break;
             }
          }
          if(ok){
              return it->first;
             // break;

          }

            }
    }


    }
};
