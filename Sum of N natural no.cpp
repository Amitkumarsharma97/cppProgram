#include<iostream>
using namespace std;
int main(){
    int n, res;
    cout << "Enter the number of number that you want to add: ";
    cin >> n;
    res=n*(n-1)/2;
    cout << "The sum of first " << n << " natural numbers is: " << res;
    return 0;
}