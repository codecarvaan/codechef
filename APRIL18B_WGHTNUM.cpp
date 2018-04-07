#include<iostream>
#include <cmath>
#include<math.h>
using namespace std;
int main()
{
    int T;

    cin>>T;
    while(T--)
    {   unsigned long long  numb;
        const unsigned int M= 1000000007;
        int digit,W;
        cin>>digit;
        cin>>W;
        numb=fmod(pow(10,digit-2)*(9-W),M);
        if(W>9)
        {
            num=0;
        }
        cout<<numb<<endl;
}
}
