#include <iostream>
#include <string>
using namespace std;

class Robot {
    string motors;
    string microcontroller;
    int buttons;
    int moto[4];

public:
    void details() { 
        cout << "Enter type of motor: ";
        cin >> motors;
        cout << "Enter type of microcontroller: ";
        cin >> microcontroller;
        cout << "Enter number of buttons: ";
        cin >> buttons;
        for (int i = 0; i < 4; i++) moto[i] = 0;
    }

    void display() {
        cout << "The type of motor is: " << motors << endl;
        cout << "The type of microcontroller is: " << microcontroller << endl;
        cout << "Number of buttons: " << buttons << endl;
        for (int i = 0; i < 4; i++) 
            cout << "Motor " << i+1 << " speed: " << moto[i] << endl;
    }

    void changeSpeed() {
        cout << "Which motor speed do you want to change (1, 2, 3, or 4)? ";
        int i;
        cin >> i;
        cout << "How much speed do you want? ";
        int speed;
        cin >> speed;
        if (i >= 1 && i <= 4) {
            moto[i - 1] = speed;
            cout << "Motor " << i << " speed updated to " << speed << endl;
        } else {
            cout << "Invalid motor number!" << endl;
        }
    }
};

int main() {
    Robot r1;
    r1.details();
    r1.display();
    r1.changeSpeed();
    r1.display();
}
