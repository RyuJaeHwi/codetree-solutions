#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A;
    int B;

    cin >> A >> B;

    double result = (A + B) / 2.0;

    cout << fixed;
    cout.precision(1);

    cout << A + B << " " << result;

    return 0;
}