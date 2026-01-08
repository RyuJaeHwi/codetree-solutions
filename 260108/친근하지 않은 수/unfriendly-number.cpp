#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;

    cin >> N;

    int arr[100];

    int sum = 0;

    for(int i = 0; i < N; i++){
        if(arr[i] % 2 == 0 || arr[i] % 3 == 0 || arr[i] % 5 == 0){
            continue;
        }

        sum += 1;
    }

    cout << sum;

    return 0;
}