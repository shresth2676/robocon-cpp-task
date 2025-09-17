#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int perfect = 0;
for (int i=1;i<n;i++){
    if(n%i == 0){
        perfect += i;
    }
}
if(n == perfect){
    cout<<"Given number is pefect";

}
else{
    cout<<"Given number is not perfect";
}
}