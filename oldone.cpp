#include<iostream>
using namespace std;
int main()
{


    int T;
    cin>>T;
    while(T--)
    {   int times;
        int a=0,b=0,anet=0;
        string str,str_sum;
        cin>>str;
        cin>>times;


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
        }
        cout<<anet<<endl;
    }
}
