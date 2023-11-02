#include <iostream>
using namespace std;
int main() {
    int userChoice;
    cout << "Enter 1 to find prime numbers in a given range or 2 to check if a specific number is prime: ";
    cin >> userChoice;

    if (userChoice == 1) {
        int start, end;
        cout << "Enter the start of the range: ";
        cin >> start;
        cout << "Enter the end of the range: ";
        cin >> end;

        cout << "Prime numbers in the given range are: ";
        for (int i = start; i <= end; i++) {
            bool isPrime = true;
            if (i <= 1) {
                isPrime = false;
            }
            else {
                for (int j = 2; j * j <= i; j++) {
                    if (i % j == 0) {
                        isPrime = false;
                        break;
                    }
                }
            }
            if (isPrime) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    else if (userChoice == 2) {
        int num;
        cout << "Enter the number to check: ";
        cin >> num;

        bool isPrime = true;
        if (num <= 1) {
            isPrime = false;
        }
        else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            cout << num << " is a prime number." << endl;
        }
        else {
            cout << num << " is not a prime number." << endl;
        }
    }
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}