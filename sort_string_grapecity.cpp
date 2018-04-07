#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;

        a[0]=a[0]+a[1];
        a[1]=a[0]-a[1];
        a[0]=a[0]-a[1];

        for(int i=0;i<a.length();i++)
        {
            for(int j=0;j<a.length();j++)
            {
                if(a[i]>=a[j] )
                {
                    continue;
                }
                else{
                    a[i]=a[i]+a[j];
                    a[j]=a[i]-a[j];
                    a[i]=a[i]-a[j];
                }
            }

        }
        cout<<a;


}
