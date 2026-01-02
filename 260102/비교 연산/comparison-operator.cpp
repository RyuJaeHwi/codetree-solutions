#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B;
    cin >> A >> B;

    // 1
    if(A >= B){
        cout << 1 << '\n';
    }
    if(A < B){
        cout << 0 << '\n';
    }

    // 2
    if(A > B){
        cout << 1 << '\n';
    }
    if(A <= B){
        cout << 0 << '\n';
    }
    
    // 3
    if(A <= B){
        cout << 1 << '\n';
    }
    if(A > B){
        cout << 0 << '\n';
    }

    // 4
    if(A < B){
        cout << 1 << '\n';
    }
    if(A >= B){
        cout << 0 << '\n';
    }

    // 5
    if(A == B){
        cout << 1 << '\n';
    }
    if(A != B){
        cout << 0 << '\n';
    }

    // 6
    if(A != B){
        cout << 1 << '\n';
    }
    if(A == B){
        cout << 0 << '\n';
    }

    return 0;
}