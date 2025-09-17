#include <iostream>
using namespace std;

int main() {
    long long n;
    int freq[10] = {0};
    cin >> n;
    while (n > 0) {
        int a = n % 10;
        freq[a]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << i <<" appears " << freq[i] <<" times"<< endl;
    }
    return 0;
}
