#include<iostream>
using namespace std;
void prime(){
int n;
cin>>n;
for(int i=2;i<=n;i++)
{
    if(n%i==0)
    cout<<"not prime";
    else 
    cout<<"prime";
    return;
}

}
int main(){
    prime();
    return 0;
}