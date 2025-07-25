#include <iostream>
using namespace std;

int main() {

    int n, opinion;
    bool dificil = false;

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> opinion;
        if (opinion == 1) {
            dificil = true;
            break;
        }
    }
    if (dificil) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
    }
