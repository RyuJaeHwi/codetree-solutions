#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int gender;
    int age;

    cin >> gender;
    cin >> age;

    if(gender == 0){
        if(age >= 19){
            cout << "MAN";
        }
        else if(age < 19){
            cout << "BOY";
        }
    }
    else if (gender == 1){
        if(age >= 19){
            cout << "WOMAN";
        }
        else if(age < 19){
            cout << "GIRL";
        }
    }

    return 0;
}