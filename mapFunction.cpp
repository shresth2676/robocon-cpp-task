#include <iostream>
using namespace std;

int map(int value, int inMin, int inMax, int outMin, int outMax) {
    return (value - inMin) * (outMax - outMin) / (inMax - inMin) + outMin;
}

int main() {
    int input = 50;
    int mappedValue = map(input, 0, 100, 0, 1000);
    cout << mappedValue;
    return 0;
}
