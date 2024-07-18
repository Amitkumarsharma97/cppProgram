#include<iostream>
using namespace std;
int main(){
    int n,m,r,rev=0;
    cout<<"Enter the Number";
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        n=n/10;
        rev=rev*10+r;
        

    }
    cout<<"The reverse of number is \n "<< rev<<endl;
    if(m==rev){
        cout<<"The number is palindrome"<<endl;
    }
    else{
        cout<<"The number is not palindrome"<<endl;
    }
    return 0;
}