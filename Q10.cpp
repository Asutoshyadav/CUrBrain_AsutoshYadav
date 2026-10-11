
#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
    if (n <= 2) {
        return 0;
    }

    vector<bool> isPrime(n, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for (int p = 2; 1LL * p * p < n; p++) {
        if (isPrime[p]) {
            for (long long j = 1LL * p * p; j < n; j += p) {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;

    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cout<<"Enter n:";
    cin >> n;
    cout <<"Output:"<< countPrimes(n) << '\n';

    return 0;
}
