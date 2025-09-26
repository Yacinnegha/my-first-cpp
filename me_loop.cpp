#include<iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        int age;
        cout << "Enter your age (attempt " << i+1 << "): ";
        cin >> age;
        cout << "I am " << age << " years old";
        if (age >= 20) {
            cout << " and ready to code!\n";
        } else if (age < 15) {
            cout << " and should play games first!\n";
        } else {
            cout << " and still learning!\n";
        }
    }
}