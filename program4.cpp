#include<iostream>
using namespace std;
int x; // global variable automatic become 0 if not initialised
int main()
{
    int y;// local variable does not have default value,it will have garbage value if not initialised
    cout<<"value of x is:"<<x<<"\nvalue of y is:"<<y;
    return 0;
}
