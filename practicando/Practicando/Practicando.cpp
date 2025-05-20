#include <iostream>
#define N 5
using namespace std;
int main() {
	for (int i = 0; i <= 8; i++) {
		for (int j = 0; j <= 8; j++) {
			if (i + j == 4 || i + 4 == j || j + 4 == i || i + j == 12) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}

    cout << endl;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << " *";
        }
        cout << endl;
    }
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 1; j <= N - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << " *";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}