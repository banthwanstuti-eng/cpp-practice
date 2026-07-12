/*#include<iostream>
using namespace std;
int countD(){
int n,count=0;
cin>>n;
if(n==0)
return 1;
while(n!=0){
n/=10;
count++;
}
return count;}
int main(){
cout<<countD();
return 0;}*/ 
#include<iostream>
using namespace std;
int countD(){
   int count=0,n;
   cin>>n;
   if(n==0)
   return 1;
for(;n!=0;n=n/10){
   count++;
}
return count;
}
int main(){
   cout<<countD();
return 0;
}
