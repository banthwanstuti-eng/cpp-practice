#include<iostream>
using namespace std;
int factorial(){
    int n,fact=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
int main(){
    cout<<factorial();
    return 0;}

