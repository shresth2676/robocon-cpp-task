#include <iostream>
#include <string>
using namespace std;

class Robot2 {
    string name;
    int batteryLevel;
public:
    Robot2() {
        name = "Alpha";
        batteryLevel = 100;
    }
    void performTask() {
        batteryLevel -= 10;
    }
    void display() {
        cout << "The robot's name is: " << name << endl;
        cout << "The battery level is: " << batteryLevel << endl;
    }
    ~Robot2(){
        cout<<"Shutdown"<<endl;
    }
};

int main() {
    Robot2 s1;
    s1.performTask();
    s1.display();
}
