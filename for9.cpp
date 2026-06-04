#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cin>>n;
    for(int i=n;i>0;i=i/10){
        rev=rev*10+i%10;
    }
    cout<<rev;
    return 0;
}