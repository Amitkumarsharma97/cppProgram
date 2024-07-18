#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            int dt=i-1;
            int db=2*n-1-i;
            int dl=j-1;
            int dr=2*n-1-j;
            int ram=min(min(dt,db), min(dl,dr));
            cout<<n-ram<<"  ";

        }
        cout<<endl;
    }
    return 0;

}