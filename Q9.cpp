
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) {
        return false;
    }

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

int nextPrime(int n) {
    if (n < 2) {
        return 2;
    }

    int candidate = n + 1;

    while (true) {
        if (isPrime(candidate)) {
            return candidate;
        }

        candidate++;
    }
}

int main() {
    int n;
    cout<<"Enter n:";
    cin >> n;

    cout << "Output:"<<nextPrime(n) << '\n';

    return 0;
}
