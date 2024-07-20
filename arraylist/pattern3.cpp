#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the number what mumber of tringle you want to print";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i<=j)
            cout<<"* "<<" ";
    
         }
    cout<<"  "<<endl;

    }
    cout<<" Triangle is printed";



        return 0;
}