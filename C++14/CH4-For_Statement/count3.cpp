#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
    int  n = 0;

// Get a number from the keyboard.

    cout << "Enter a number and press ENTER: ";
    cin >> n;

    for (int i = 1; i <= n; ++i){ // For i = 1 to n
        cout << i << " ";         //    Print i.
    }
    return 0;
}
