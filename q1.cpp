#include<iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter the number of  factorial series: ";
    cin >> num;

    cout << "Factorial Series: ";
    for (int i = 0; i <= num; ++i) {
        int factorial = 1;

        for (int j = 1; j <= i; ++j) {
            factorial *= j;
        }

        cout << factorial << " ";
    }

    cout << endl;

}

