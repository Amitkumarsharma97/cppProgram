#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,5,9,10,2,1};
    int n=7, sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum of all elements of array is "<<sum<<endl;
    return 0;
}