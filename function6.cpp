#include<iostream>
using namespace std;
int reverse(){
int n,rev=0;
cout<<"Enter a number:";
cin>>n;
while(n!=0){
    rev=rev*10+n%10;
    n/=10;
}
return rev;
}
int main(){
    cout<<reverse();
    return 0;
}