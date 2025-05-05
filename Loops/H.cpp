#include <bits/stdc++.h>
using namespace std;

bool isPrime(int X) {
    if (X < 2) return false;
    for (int i = 2; i * i <= X; i++) {
        if (X % i == 0) return false;
    }
    return true;
}

int main() {
    int X;
    cin >> X;

    if (isPrime(X)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
