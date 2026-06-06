#include<iostream>
using namespace std;
int main(){
    int n,original,rev=0;
    cin>>n;
    original=n;
    for(;n>0;n/=10){
        rev=rev*10+n%10;

    }
    if(original==rev){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
}