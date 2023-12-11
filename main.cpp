#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout << "Input your first value" << endl;
    cin >> a;
    cout << "Your first value (a) is " << a << endl;

    cout << "Input your second value" << endl;
    cin >> b;
    cout << "You second value (b) is " << b << endl;

    // int temp = a;
    // a = b;
    // b = temp;

    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    // if (a <= 0 || a >= 0 )
    // {
    //     a = b;
    //     // cout << a;
    // }
    // else if (b <= 0 || b >= 0)
    // {
    //     b = a;
    //     // cout << b;
    // } 
    // else
    //     cout << "Your input is invalid. ";

    int *pointer_one = 0;
    pointer_one = &b;
    int *pointer_two = 0;
    pointer_two = &a;
    // a = *pointer_one;
    // b = *pointer_two;
    cout << "After swapping: a = " << *pointer_one << ", b = " << *pointer_two << "." << endl;

    // cout << "After swapping: a = " << a << ", b = " << b << "." << endl;
    return 0;
}