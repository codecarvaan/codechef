#include<iostream>
using namespace std;
int main()
{


    int T;
    cin>>T;
    while(T--)
    {   int times,times_org;
        int a=0,b=0,anet=0,at2,at3,ainc,numb;
        int flag=false;
        string str,str_sum;
        cin>>str;
        cin>>times;
        times_org=times;

        str_sum=str;
        for(int i=0;i<str_sum.length();i++)
        {
            if(str_sum[i]=='a')
            {
                a++;
            }
            else{
                b++;
            }
            if(a>b)
            {
                anet++;
            }
            if(i==str_sum.length()-1 && --times)
            {
                str_sum=str_sum+str;
            }
            if((i+1)/str.length()==2 && (i+1)%str.length()==0)
            {
                at2=anet;
            }
            if((i+1)/str.length()==3 && (i+1)%str.length()==0)
            {
                at3=anet;
                flag=true;
            }
            if(flag)
            {
                break;
            }
        }
        if(times_org>3)
        {
          ainc=at3-at2;
          numb=(times_org-3);
          anet=at3+numb*ainc;
          cout<<anet<<endl;
        }
        else{
            cout<<anet<<endl;
        }

    }
}
