#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==(n/2)+1 || j==(n/2)+1) || (j==1 && i<=n/2) || (i==1 && j>n/2) || (j==n && i>n/2) || (i==n && i<=n/2))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}