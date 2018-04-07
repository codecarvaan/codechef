#include <iostream>
using namespace std;
int main()
{

        int T;
    cin>>T;

    while(T--)
    {   int Fingure;
        cin>>Fingure;
        int G[Fingure];
        int H[Fingure];
        int flag1=true;
        int flag2=true;
        for(int i=0;i<Fingure;i++)
        {
            cin>>H[i];
            }
        for(int i=0;i<Fingure;i++)
        {
            cin>>G[i];
            }

        for(int i=0;i<Fingure;i++)
        {

                if(G[i]>=H[i])
                {


                }
                else{
                    flag1=false;

                }
                if(G[Fingure-i-1]>=H[i])
                {


                }
                else{
                    flag2=false;

                }

                if(flag1==false && flag2==false)
                {
                    break;
                }

            }


    if(flag1==false &&flag2==true)
            {
                cout<<"back \n";
                continue;
            }
            if(flag1==true &&flag2==false)
            {
                cout<<"front \n";
                 continue;
            }
            if(flag1==true &&flag2==true)
            {
                cout<<"both \n";
                 continue;
            }
            if(flag1==false &&flag2==false)
            {
                cout<<"none \n";
                 continue;
            }

    }
}
