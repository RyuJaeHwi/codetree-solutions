#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;

    cin >> str;

    if (str.length() >= 10 && str.length() <= 100){
        str[1] = 'a';
        str[str.length() - 2] = 'a';

        cout << str;
    }

    return 0;
}