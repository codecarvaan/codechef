#include<iostream>
using namespace std;
int main(){

                int num;
                int coin[num],type[num];
                 int min_1=1000000;
                 int min_2=1000000;
                 int min_3=1000000;
                for(int i=0;i<num;i++)
                {
                    cin>>coin[i];

                }
                for(int i=0;i<num;i++)
                {
                    cin>>type[i];

                }
                for(int i=0;i<num;i++)
                {
                    if(type[i]==1 && min_1>coin[i])
                    {
                    min_1=coin[i];
                    }
                    if(type[i]==2 && min_2>coin[i])
                    {
                    min_2=coin[i];
                    }
                    if(type[i]==3 && min_3>coin[i])
                    {
                    min_3=coin[i];
                    }
                }
            int min_12=min_1+min_2;
            if(min_12>min_3)
            {
                cout<<min_3;
            }
            else{
                cout<<min_12;
            }
}
