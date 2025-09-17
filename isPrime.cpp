#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i < x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && isPrime(i))
            cout << i << " ";
    }
    return 0;
}

