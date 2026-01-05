#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int Amath, Aeng, Bmath, Beng;

    cin >> Amath >> Aeng;
    cin >> Bmath >> Beng;

    if(Amath > Bmath && Aeng > Beng){
        cout << 1;
    }
    else{
        cout << 0;
    }

    return 0;
}