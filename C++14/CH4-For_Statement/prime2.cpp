#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
	
    int  n = 0;   // Number to test for prime-ness
    bool is_prime = true; // Boolean flag; assume true
                          //   until proven otherwise

    // Get a number from the keyboard.

    cout << "Enter a number and press ENTER: ";
    cin >> n;
    
    // Test for prime by checking for divisibility
    //  by all whole numbers from 2 to sqrt(n).

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            is_prime = false;
        }
    }

    // Print results

    if (is_prime) {
        cout << "Number is prime." << endl;
    } else {
        cout << "Number is not prime." << endl;
    }
    return 0;
}
