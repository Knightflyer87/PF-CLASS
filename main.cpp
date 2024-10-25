#include <iostream>

using namespace std;
int main() {
    int num1;
    cout << "Enter number one: ";
    cin >> num1;

    if (num1  % 2 == 0) {
        cout << num1 << " is even ";
    }
    if (num1  % 2 != 0) {
        cout << num1 << " is odd ";
    }
    return 0;
}
