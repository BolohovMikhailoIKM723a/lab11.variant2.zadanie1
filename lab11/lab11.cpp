#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;

    cout << "введіть значення для a: ";
    cin >> a;
    cout << "введіть значення для b: ";
    cin >> b;
    int* ptr_a = &a;
    int* ptr_b = &b;
    if (*ptr_a > *ptr_b) {
        *ptr_a *= 2; 
    }
    else {
        *ptr_b /= 2; 
    }
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}