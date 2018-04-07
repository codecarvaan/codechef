#include <iostream>
using namespace std;

int main()
{
    int line=7;
    for(int i =1;i<=line;i++)
      {

       for(int j=line-i;j>0;j-- ) //spaces
        {

            cout<<" ";
        }
        for(int k=i;k<=2*i-1;k++) //number
        {
            cout<<k;

        }

        for(int k=2*i-2;k>=i;k--) //number
        {
            cout<<k;

        }
        cout<<"\n";
      }

}


