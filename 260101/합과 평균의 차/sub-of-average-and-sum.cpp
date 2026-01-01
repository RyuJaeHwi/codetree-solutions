#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c;

    cin >> a >> b >> c;

    int sum = a + b + c;
    int avg = (a + b + c) / 3;
    int result = sum - avg;

    cout << sum;
    cout << "\n";
    cout << avg;
    cout << "\n";
    cout << result;

    return 0;
}