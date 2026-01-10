#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a;

    cin >> a;

    string words[5] = { "apple", "banana", "grape", "blueberry", "orange" };

    int cnt = 0;

    for (int i = 0; i < 5; i++) {
        if (words[i][2] == a || words[i][3] == a){
            cout << words[i] << "\n";
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}