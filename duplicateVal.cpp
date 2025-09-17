#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 6, 4, 9, 13,13};  
    int n = sizeof(arr) / sizeof(arr[0]);
    bool flag = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                flag = true;
                break;
            }
        }
        if(flag) break; 
    }

    if(flag)
        cout << "Array has duplicate values";
    else
        cout << "Array doesn't have duplicate values";

    return 0;
}
