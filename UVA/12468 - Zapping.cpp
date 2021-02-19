#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,count;

    while(1)
    {
        count=0;
        cin>>a>>b;
         if(a==-1 && b==-1)
            break;
            if(abs(a)<abs(b)){
                    if(a==0 && b==99)
                    {
                        count++;
                    }
                    else{
           for(int i=abs(a);i<abs(b);i++)
           {

            count++;

           }
            }

            }

            else if(abs(a)>abs(b))
                {
                    if(a==99 && b==0)
                {
                    count++;
                    }
                    else{
                for(int j=abs(a);j>abs(b);j--)
                {

                    count++;

                }
                    }
            }

        cout<<count<<endl;


    }

    return 0;
}
