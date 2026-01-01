#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int b;

    cin >> a >> b;

    int temp = 0;
    temp = a;
    a = b;
    b = temp;

    cout << a << " " << b;

    return 0;
}