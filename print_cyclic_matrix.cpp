#include<iostream>
using namespace std;
 int main()
 {
    int n=3,m=3;

    int mat[n][m];
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {

            mat[i][j]=c++;
            cout<<mat[i][j]<< " ";
        }
        cout<<endl;
    }

 }
