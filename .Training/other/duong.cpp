#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0, original = n, digits = 0;
    while (n > 0) {
        n /= 10;
        digits++;
    }
    n = original;
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }
    return sum == original;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int choice;
    char finish;
    do {
        cout << "MENU" << endl;
        cout << "1. Armstrong" << endl;
        cout << "2. Prime" << endl;
        cout << "3. Finish" << endl;
        cout << "Choose (1,2,3): ";
        cin >> choice;

        if (choice == 1) {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            if (isArmstrong(num)) {
                cout << num << " is an Armstrong number." << endl;
            } else {
                cout << num << " is not an Armstrong number." << endl;
            }
        } else if (choice == 2) {
            int num;
            cout << "Enter a number: ";
            cin >> num;
            if (isPrime(num)) {
                cout << num << " is a prime number." << endl;
            } else {
                cout << num << " is not a prime number." << endl;
            }
        } else if (choice == 3) {
            char finish;
            cout << "Do you want to finish (c/k)? ";
            cin >> finish;
            if (finish == 'c') {
                cout << "See you again!" << endl;
                break;
            }
        }
    } while (choice != 3 || finish != 'c');
    return 0;
}
