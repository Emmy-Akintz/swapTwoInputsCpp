#include <iostream>

using namespace std;

int main () {
    int a;
    int b;
    cout << "Input your first value" << endl;
    cin >> a;
    cout << "Your first value (a) is " << a << endl;

    cout << "Input your second value" << endl;
    cin >> b;
    cout << "You second value (b) is " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << "." << endl;
    return 0;
}