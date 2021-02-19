class Solution {
public:
    string reformatNumber(string s) {
        int n = s.size();
     string s1;
     
    for(int i = 0; i<n; ++i){
        if(s[i]>=48 && s[i]<=57)s1+=s[i];
    }


    if(s1.size() % 3 == 0){
        string s2;

        for(int i = 0 ; i<s1.size() ; i+=3){
            s2+=s1[i];
            s2+=s1[i+1];
            s2+=s1[i+2];
            s2+='-';
        }

        s2.erase (s2.begin()+s2.size() -1);

         return s2;
        //cout<<s2<<endl;
    }else{

        int x = (s1.size() % 3);

        string s2;

        if(x == 1){

            for(int i = 0 ;i<s1.size() - 4 ; i+=3){
                s2+=s1[i];
                s2+=s1[i+1];
                s2+=s1[i+2];
                s2+='-';
            }
            for(int i = s1.size() - 4; i<s1.size(); i+=2){
                 s2+=s1[i];
                 s2+=s1[i+1];
                 s2+='-';
            }
            s2.erase (s2.begin()+s2.size() -1);

            //cout<<s2<<endl;
            
            return s2;

        }else{

              for(int i = 0 ;i<s1.size() - 2; i+=3){
                s2+=s1[i];
                s2+=s1[i+1];
                s2+=s1[i+2];
                s2+='-';
            }
            for(int i = s1.size() - 2; i<s1.size(); i+=2){
                 s2+=s1[i];
                 s2+=s1[i+1];
                 s2+='-';
            }
            s2.erase (s2.begin()+s2.size() -1);
           // cout<<s2<<endl;
            
            return s2;

        }

    }
    }
};
