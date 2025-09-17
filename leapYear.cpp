#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    cout << year << ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) ? " is a leap year\n"  : " is not a leap year\n");

    return 0;
}
