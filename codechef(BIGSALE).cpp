#include <iostream>
#include<iomanip>
using namespace std;
int main()
{

    int T;
    cin>>T;

    while(T--)
    {
        int num;
        double price=0.00000000000000;
        int qty;
        double dis;
        double loss=0.00000000000;
        cin>>num;
        for(int i=0;i<num;i++)
        {
            cin>>price;
            cin>>qty;
            cin>>dis;
            double inc=price*(1+(dis/100));
            double dec=inc*(1-(dis/100));
            loss+=(price-dec)*qty;
        }
       std::cout<<std::setprecision(20)<<loss<<'\n';
        }
}
