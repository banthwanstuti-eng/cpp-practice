#include <iostream>
using namespace std;

int main() {
    int pin;
    cout << "Enter PIN: ";
    cin >> pin;

    while (pin != 9999) {
        cout << "incorrect pin\n";
        cin >> pin;
    }

    cout << "access granted\n";
    return 0;
}