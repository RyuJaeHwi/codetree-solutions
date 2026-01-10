#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N[100];
    int cnt3 = 0;
    int cnt5 = 0;

    for(int i = 0; i < 10; i++){

        cin >> N[i];

        if(N[i] % 3 == 0)
            cnt3++;

        if(N[i] % 5 == 0)
            cnt5++;
    }

    cout << cnt3 << " " << cnt5;

    return 0;
}