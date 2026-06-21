#include<iostream>
using namespace std;
int main(){
    const int correctPassword = 9999;
    int password = 0;

    do {
        cout << "Enter password: ";
        cin >> password;

        if (password != correctPassword) {
            cout << "Incorrect password\n";
        }
    } while (password != correctPassword);

    cout << "Access granted\n";
    return 0;
}