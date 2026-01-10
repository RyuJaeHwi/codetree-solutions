#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;

    while(N != 25){

        cin >> N;

        if(N > 25){
            cout << "Lower" << "\n";
        }
        else if(N < 25){
            cout << "Higher" << "\n";
        }
    }

    cout << "Good";

    return 0;
}