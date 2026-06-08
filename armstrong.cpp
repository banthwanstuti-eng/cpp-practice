#include<iostream>
using namespace std;

int main()
{
    int n, original, sum = 0;

    cin >> n;
    original = n;

    for(; n > 0; n /= 10)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
    }

    if(sum == original)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}